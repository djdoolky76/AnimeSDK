#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define E9E81D8677537399_AE801CF8F6877699_EEB202A685991E30_OFFSET UNITYSDK_OFFSET(0x39FCBC0)
#define E9E81D8677537399_AE801CF8F6877699__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_AE801CF8F6877699_TypeDefinitionIndex = 11869;

class E9E81D8677537399_AE801CF8F6877699 : public ::System::Object
{
public:
	::System::Action* BF826AA661AB900D; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_AE801CF8F6877699__CTOR_OFFSET))(this);
	}

	::System::Void EEB202A685991E30(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + E9E81D8677537399_AE801CF8F6877699_EEB202A685991E30_OFFSET))(this, E82293C0814051A5);
	}
};
