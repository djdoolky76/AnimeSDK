#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBBMNPHLLMH;

#define LBBMNPHLLMH_BKBJIAALNHK_KOIPAMFELDH_OFFSET UNITYSDK_OFFSET(0x129B4B50)
#define LBBMNPHLLMH_BKBJIAALNHK__CTOR_OFFSET UNITYSDK_OFFSET(0x129B4B40)

inline static constexpr unsigned int LBBMNPHLLMH_BKBJIAALNHK_TypeDefinitionIndex = 48563;

class LBBMNPHLLMH_BKBJIAALNHK : public ::System::Object
{
public:
	::LBBMNPHLLMH* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBMNPHLLMH_BKBJIAALNHK__CTOR_OFFSET))(this);
	}

	::System::Void KOIPAMFELDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBMNPHLLMH_BKBJIAALNHK_KOIPAMFELDH_OFFSET))(this);
	}
};
