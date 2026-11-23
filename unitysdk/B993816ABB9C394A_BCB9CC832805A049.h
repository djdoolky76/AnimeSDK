#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_BCB9CC832805A049_E5A5BF003B492EF6_OFFSET UNITYSDK_OFFSET(0x38D78F0)
#define B993816ABB9C394A_BCB9CC832805A049__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_BCB9CC832805A049_TypeDefinitionIndex = 11750;

class B993816ABB9C394A_BCB9CC832805A049 : public ::System::Object
{
public:
	::B993816ABB9C394A* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BCB9CC832805A049__CTOR_OFFSET))(this);
	}

	::System::Void E5A5BF003B492EF6(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BCB9CC832805A049_E5A5BF003B492EF6_OFFSET))(this, E82293C0814051A5);
	}
};
