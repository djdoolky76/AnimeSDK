#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

class B8CF9CECD813351B;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B8CF9CECD813351B_F9CFA515FEAB199D_A79B4DF313D7A127_OFFSET UNITYSDK_OFFSET(0x3A5D550)
#define B8CF9CECD813351B_F9CFA515FEAB199D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8CF9CECD813351B_F9CFA515FEAB199D_TypeDefinitionIndex = 12990;

class B8CF9CECD813351B_F9CFA515FEAB199D : public ::System::Object
{
public:
	::B8CF9CECD813351B* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8CF9CECD813351B_F9CFA515FEAB199D__CTOR_OFFSET))(this);
	}

	::System::Void A79B4DF313D7A127(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + B8CF9CECD813351B_F9CFA515FEAB199D_A79B4DF313D7A127_OFFSET))(this, E82293C0814051A5);
	}
};
