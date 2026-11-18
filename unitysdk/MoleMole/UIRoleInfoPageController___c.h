#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CC6550)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC6590)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONCLICKBACKBTN_B__101_0_OFFSET UNITYSDK_OFFSET(0x14CC6F00)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONMINDSCAPECLOSEOVERHANDLE_B__91_0_OFFSET UNITYSDK_OFFSET(0x14CC6820)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONUIINIT_B__74_1_OFFSET UNITYSDK_OFFSET(0x14CC65A0)
#define MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__UPDATEINFOBTNTEXT_B__113_0_OFFSET UNITYSDK_OFFSET(0x14CC6FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageController___c_TypeDefinitionIndex = 52902;

	class UIRoleInfoPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__91_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x390E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x390E8);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__113_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x390F0);
		}
		static ::System::Action** StaticGet___9__74_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x390F8);
		}
		static ::System::Action** StaticGet___9__101_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageController___c_TypeDefinitionIndex)->GetStaticField(0x39100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__74_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONUIINIT_B__74_1_OFFSET))(this);
		}

		::System::Void _OnMindscapeCloseOverHandle_b__91_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONMINDSCAPECLOSEOVERHANDLE_B__91_0_OFFSET))(this);
		}

		::System::Void _OnClickBackBtn_b__101_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__ONCLICKBACKBTN_B__101_0_OFFSET))(this);
		}

		::System::String* _UpdateInfoBtnText_b__113_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTROLLER___C__UPDATEINFOBTNTEXT_B__113_0_OFFSET))(this);
		}
	};
}
