#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEPHGKLFHDC.h"
#include "unitysdk/System/Object.h"

#define IILAGBBMPJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C8770)

inline static constexpr unsigned int IILAGBBMPJN_TypeDefinitionIndex = 93475;

class IILAGBBMPJN : public ::System::Object
{
public:
	::System::Int32 JOGJHDBEDPN; // 0x10
	::MEPHGKLFHDC OAPLNDFIBCM; // 0x14
	::System::Int32 ONGKNJDGBLJ; // 0x18

	::System::Void _ctor(::MEPHGKLFHDC DGGHPNKEMKA, ::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Void(*)(::PVOID, ::MEPHGKLFHDC, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IILAGBBMPJN__CTOR_OFFSET))(this, DGGHPNKEMKA, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
