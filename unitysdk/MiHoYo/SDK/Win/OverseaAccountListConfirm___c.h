#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class OverseaAccountListConfirm; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDAA760)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAA7A0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BDAA7B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountListConfirm___c_TypeDefinitionIndex = 9304;

	class OverseaAccountListConfirm___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x25BB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x25BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__28_0(::MiHoYo::SDK::Win::OverseaAccountListConfirm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountListConfirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM___C__SHOW_B__28_0_OFFSET))(this, a1);
		}

	};
}
