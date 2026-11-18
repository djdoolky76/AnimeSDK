#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAccountList; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A82C0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A8300)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__SHOW_B__41_0_OFFSET UNITYSDK_OFFSET(0x1C4A8310)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList___c_TypeDefinitionIndex = 20601;

	class OverseaAccountList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList___c_TypeDefinitionIndex)->GetStaticField(0xA060);
		}
		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>** StaticGet___9__41_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaAccountList*>**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList___c_TypeDefinitionIndex)->GetStaticField(0xA068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__41_0(::MiHoYo::SDK::Win::OverseaAccountList* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAccountList*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST___C__SHOW_B__41_0_OFFSET))(this, dialog);
		}
	};
}
