#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomExAsrRack_StreamType : ::System::Int32
	{
		Music = 0,
		Alarm = 1,
		Dtmf = 2,
		Notification = 3,
		Ring = 4,
		System = 5,
		VoiceCall = 6,
	};
}
