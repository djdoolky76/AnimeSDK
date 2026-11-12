#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class GooglePCOAuth; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CECAD40)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CECAD80)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__SHOW_B__27_0_OFFSET UNITYSDK_OFFSET(0x1CECAD90)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCOAuth___c_TypeDefinitionIndex = 9497;

	class GooglePCOAuth___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::GooglePCOAuth*>** StaticGet___9__27_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::GooglePCOAuth*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29AE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x29AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__27_0(::MiHoYo::SDK::Win::GooglePCOAuth* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GooglePCOAuth*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__SHOW_B__27_0_OFFSET))(this, a1);
		}

	};
}
