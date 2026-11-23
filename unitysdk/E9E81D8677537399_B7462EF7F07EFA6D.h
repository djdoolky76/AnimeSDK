#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define E9E81D8677537399_B7462EF7F07EFA6D_A6696C39A4454B5B_OFFSET UNITYSDK_OFFSET(0x39FCBC0)
#define E9E81D8677537399_B7462EF7F07EFA6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9E81D8677537399_B7462EF7F07EFA6D_TypeDefinitionIndex = 11868;

class E9E81D8677537399_B7462EF7F07EFA6D : public ::System::Object
{
public:
	::System::Action* BF826AA661AB900D; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9E81D8677537399_B7462EF7F07EFA6D__CTOR_OFFSET))(this);
	}

	::System::Void A6696C39A4454B5B(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + E9E81D8677537399_B7462EF7F07EFA6D_A6696C39A4454B5B_OFFSET))(this, E82293C0814051A5);
	}
};
