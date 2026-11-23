#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::Internal::OS { class GooglePCOAuth; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_F5628F8349D4A8A6_E1F0CC90BE8AE27E_OFFSET UNITYSDK_OFFSET(0x3A421B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A44FD0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int GooglePCOAuth_F5628F8349D4A8A6_TypeDefinitionIndex = 12953;

	class GooglePCOAuth_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*>** StaticGet_E354E9AE74DDD48C()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*>**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void E1F0CC90BE8AE27E(::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_F5628F8349D4A8A6_E1F0CC90BE8AE27E_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
