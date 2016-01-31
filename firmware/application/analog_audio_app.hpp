/*
 * Copyright (C) 2014 Jared Boone, ShareBrained Technology, Inc.
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __ANALOG_AUDIO_APP_H__
#define __ANALOG_AUDIO_APP_H__

#include "receiver_model.hpp"
#include "ui_spectrum.hpp"

class AnalogAudioModel {
public:
	AnalogAudioModel(ReceiverModel::Mode mode);

private:
	void configure_nbfm();
	void configure_wfm();
	void configure_am();
};

namespace ui {

class AnalogAudioView : public spectrum::WaterfallWidget {
public:
	AnalogAudioView(
		ReceiverModel::Mode mode
	) : model { mode }
	{
	}

private:
	AnalogAudioModel model;
};

} /* namespace ui */

#endif/*__ANALOG_AUDIO_APP_H__*/