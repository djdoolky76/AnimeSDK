#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriWarePS5_AudioPortType : ::System::UInt16
	{
		Main = 0,
		Bgm = 1,
		Voice = 2,
		PadSpeaker = 3,
		Personal = 4,
		Aux = 5,
		Vibration = 6,
		ObjectMain = 256,
		ObjectVoice = 258,
		ObjecPersonal = 260,
	};
}
