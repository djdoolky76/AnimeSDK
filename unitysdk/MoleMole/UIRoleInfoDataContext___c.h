#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIROLEINFODATACONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167BB200)
#define MOLEMOLE_UIROLEINFODATACONTEXT___C__CONSTRUCT_B__18_0_OFFSET UNITYSDK_OFFSET(0x167BB250)
#define MOLEMOLE_UIROLEINFODATACONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167BB240)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDataContext___c_TypeDefinitionIndex = 39932;

	class UIRoleInfoDataContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoDataContext___c_TypeDefinitionIndex)->GetStaticField(0x45240);
		}
		static ::System::Action** StaticGet___9__18_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoDataContext___c_TypeDefinitionIndex)->GetStaticField(0x45248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Construct_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT___C__CONSTRUCT_B__18_0_OFFSET))(this);
		}
	};
}
