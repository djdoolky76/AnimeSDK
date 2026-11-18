#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace System { class Action; }

#define LOHNKGBDDDE_ELHOOONCJNP_PLFAAHFGNOK_OFFSET UNITYSDK_OFFSET(0x151B01D0)
#define LOHNKGBDDDE_ELHOOONCJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x151B01C0)

inline static constexpr unsigned int LOHNKGBDDDE_ELHOOONCJNP_TypeDefinitionIndex = 43217;

class LOHNKGBDDDE_ELHOOONCJNP : public ::System::Object
{
public:
	::System::Action* AMHGBGMOMLL; // 0x10
	::MonoUITableScrollV2* LAOANOKHCAH; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHNKGBDDDE_ELHOOONCJNP__CTOR_OFFSET))(this);
	}

	::System::Void PLFAAHFGNOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHNKGBDDDE_ELHOOONCJNP_PLFAAHFGNOK_OFFSET))(this);
	}
};
