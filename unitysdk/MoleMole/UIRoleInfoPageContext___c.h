#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D8B1A0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__15_0_OFFSET UNITYSDK_OFFSET(0x17D8B1F0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__15_1_OFFSET UNITYSDK_OFFSET(0x17D8B2C0)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__15_2_OFFSET UNITYSDK_OFFSET(0x17D8B390)
#define MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8B1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoPageContext___c_TypeDefinitionIndex = 61278;

	class UIRoleInfoPageContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x390C0);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x390C8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x390D0);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoPageContext___c_TypeDefinitionIndex)->GetStaticField(0x390D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Construct_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__15_0_OFFSET))(this);
		}

		::System::Void _Construct_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__15_1_OFFSET))(this);
		}

		::System::Void _Construct_b__15_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOPAGECONTEXT___C__CONSTRUCT_B__15_2_OFFSET))(this);
		}
	};
}
