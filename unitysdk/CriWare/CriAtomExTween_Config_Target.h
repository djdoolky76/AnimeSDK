#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Parameter.h"

namespace CriWare
{
	struct alignas(4) CriAtomExTween_Config_Target
	{
		::CriWare::CriAtomEx_Parameter parameterId; // 0x10
		::System::UInt32 aisacIds; // 0x10
	};
}
