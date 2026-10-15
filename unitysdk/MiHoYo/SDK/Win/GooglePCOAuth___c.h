#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class GooglePCOAuth; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD41CF0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD41D30)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH___C__SHOW_B__27_0_OFFSET UNITYSDK_OFFSET(0x1BD41D40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCOAuth___c_TypeDefinitionIndex = 9489;

	class GooglePCOAuth___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x20110);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x20118);
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
