#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LogoutConfirm; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D86BE80)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86BEC0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__SHOW_B__21_0_OFFSET UNITYSDK_OFFSET(0x1D86BED0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LogoutConfirm___c_TypeDefinitionIndex = 20597;

	class LogoutConfirm___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::LogoutConfirm*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::LogoutConfirm*>**)Il2CppClass::FromTypeDefinitionIndex(LogoutConfirm___c_TypeDefinitionIndex)->GetStaticField(0x97A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LogoutConfirm___c_TypeDefinitionIndex)->GetStaticField(0x97A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__21_0(::MiHoYo::SDK::Win::LogoutConfirm* logoutConfirmDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LogoutConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM___C__SHOW_B__21_0_OFFSET))(this, logoutConfirmDialog);
		}
	};
}
