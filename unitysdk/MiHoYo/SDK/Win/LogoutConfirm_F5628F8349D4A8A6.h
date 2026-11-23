#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LogoutConfirm; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_F5628F8349D4A8A6_A1AC075C230230C4_OFFSET UNITYSDK_OFFSET(0x3A29D10)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A2B970)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LogoutConfirm_F5628F8349D4A8A6_TypeDefinitionIndex = 12910;

	class LogoutConfirm_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::LogoutConfirm_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Win::LogoutConfirm_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(LogoutConfirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::LogoutConfirm*>** StaticGet_AF311A9CD59B0BEF()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::LogoutConfirm*>**)Il2CppClass::FromTypeDefinitionIndex(LogoutConfirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A1AC075C230230C4(::MiHoYo::SDK::Win::LogoutConfirm* F2B1D01D6040DA87)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LogoutConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_F5628F8349D4A8A6_A1AC075C230230C4_OFFSET))(this, F2B1D01D6040DA87);
		}
	};
}
