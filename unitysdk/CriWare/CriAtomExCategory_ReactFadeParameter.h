#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_CurveType.h"

namespace CriWare
{
	struct alignas(4) CriAtomExCategory_ReactFadeParameter
	{
		::CriWare::CriAtomEx_CurveType curveType; // 0x10
		::System::Single curveStrength; // 0x14
		::System::UInt16 fadeTimeMs; // 0x18
	};
}
