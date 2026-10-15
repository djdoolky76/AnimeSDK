#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class AccountList; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCDB910)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDB950)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__SHOW_B__45_0_OFFSET UNITYSDK_OFFSET(0x1BCDB960)
#define MIHOYO_SDK_WIN_ACCOUNTLIST___C__UPDATESELECTEDACCOUNTINFO_B__60_0_OFFSET UNITYSDK_OFFSET(0x1BCDB970)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList___c_TypeDefinitionIndex = 9295;

	class AccountList___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x185F0);
		}

		static ::System::Action** StaticGet___9__60_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x185F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x18600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__45_0(::MiHoYo::SDK::Win::AccountList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::AccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__SHOW_B__45_0_OFFSET))(this, a1);
		}

		::System::Void _UpdateSelectedAccountInfo_b__60_0(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST___C__UPDATESELECTEDACCOUNTINFO_B__60_0_OFFSET))(this, a1, a2);
		}

	};
}
