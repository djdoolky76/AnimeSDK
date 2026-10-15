#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class OverseaAccountList; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD83320)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD83360)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__SHOW_B__41_0_OFFSET UNITYSDK_OFFSET(0x1BD83370)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList___c_TypeDefinitionIndex = 9306;

	class OverseaAccountList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x35C90);
		}

		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>** StaticGet___9__41_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x35C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__41_0(::MiHoYo::SDK::Win::OverseaAccountList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__SHOW_B__41_0_OFFSET))(this, a1);
		}

	};
}
