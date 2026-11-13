#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI::Internal::OS { class GooglePCOAuth; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CBBB0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CBBF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__SHOW_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E4CBC00)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int GooglePCOAuth___c_TypeDefinitionIndex = 8441;

	class GooglePCOAuth___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x20320);
		}

		static ::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*>**)UnitySDK::FromName("MiHoYo.SDK.UI.Internal.OS", "<>c")->GetStaticField(0x20328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__29_0(::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH___C__SHOW_B__29_0_OFFSET))(this, a1);
		}

	};
}
