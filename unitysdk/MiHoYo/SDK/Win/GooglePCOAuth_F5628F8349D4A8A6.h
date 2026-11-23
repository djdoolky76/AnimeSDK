#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class GooglePCOAuth; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_F5628F8349D4A8A6_EB9463BC80C21582_OFFSET UNITYSDK_OFFSET(0x3A10950)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A12320)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCOAuth_F5628F8349D4A8A6_TypeDefinitionIndex = 12741;

	class GooglePCOAuth_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GooglePCOAuth_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::GooglePCOAuth_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::GooglePCOAuth*>** StaticGet_B55D445D85F5FA3C()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GooglePCOAuth*>**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void EB9463BC80C21582(::MiHoYo::SDK::Win::GooglePCOAuth* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GooglePCOAuth*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_F5628F8349D4A8A6_EB9463BC80C21582_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
