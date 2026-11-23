#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Toggle; }
namespace UnityEngine::UI { class ToggleGroup; }

#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A1F8C0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A1F720)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_BC3852B8D31B3374_OFFSET UNITYSDK_OFFSET(0x3A1F680)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A1F770)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A1F6D0)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_EC6F02BA510F6E4C_OFFSET UNITYSDK_OFFSET(0x3A1F660)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A1F280)
#define MIHOYO_SDK_WIN_LOGOUTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1FD40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LogoutConfirm_TypeDefinitionIndex = 12911;

	class LogoutConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LogoutConfirm** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::LogoutConfirm**)Il2CppClass::FromTypeDefinitionIndex(LogoutConfirm_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F2C15E19E5303682; // 0x60
		::UnityEngine::UI::Button* F989C27B9C8D058E; // 0x68
		::UnityEngine::UI::Toggle* B5EB9B7BFDFA1070; // 0x70
		::UnityEngine::UI::Toggle* A443784226231E80; // 0x78
		::UnityEngine::UI::ToggleGroup* E82BC5B47C56DABB; // 0x80
		::System::Action* OnCancelButtonClicked; // 0x88
		::System::Action_1<::System::Boolean>* OnLogoutButtonClicked; // 0x90
		::System::Boolean isSaved; // 0x98

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM__CTOR_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void BC3852B8D31B3374()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_BC3852B8D31B3374_OFFSET))(this);
		}

		::System::Void EC6F02BA510F6E4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_EC6F02BA510F6E4C_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_BFA7961FF2AC380B_OFFSET))();
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGOUTCONFIRM_E85D1C741D5386D7_OFFSET))();
		}
	};
}
