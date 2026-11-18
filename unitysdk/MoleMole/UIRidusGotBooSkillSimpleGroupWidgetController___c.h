#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RidusGotBooSkillEx; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166C8490)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166C84D0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x166C84E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillSimpleGroupWidgetController___c_TypeDefinitionIndex = 90849;

	class UIRidusGotBooSkillSimpleGroupWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::MoleMole::RidusGotBooSkillEx*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::MoleMole::RidusGotBooSkillEx*>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSkillSimpleGroupWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x390B0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooSkillSimpleGroupWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x390B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__6_0(::MoleMole::RidusGotBooSkillEx* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::RidusGotBooSkillEx*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLSIMPLEGROUPWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__6_0_OFFSET))(this, x);
		}
	};
}
