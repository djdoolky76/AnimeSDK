#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class NKJLGFPNLBD;
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1117B0)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1117F0)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_1_OFFSET UNITYSDK_OFFSET(0x1A111800)
#define MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_3_OFFSET UNITYSDK_OFFSET(0x1A111940)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex = 86950;

	class UIAbyssApreggioTeamWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BB0);
		}
		static ::System::Action_1<::NKJLGFPNLBD*>** StaticGet___9__20_3()
		{
			return (::System::Action_1<::NKJLGFPNLBD*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BB8);
		}
		static ::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel** StaticGet___9__20_1()
		{
			return (::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssApreggioTeamWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* _GotoBeginBattle_b__20_1(::System::Int32 selectIndex, ::Il2CppArray<::BPHGNMNLLHF*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_1_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::Void _GotoBeginBattle_b__20_3(::NKJLGFPNLBD* beginHollowData)
		{
			return ((::System::Void(*)(::PVOID, ::NKJLGFPNLBD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSAPREGGIOTEAMWIDGETCONTROLLER___C__GOTOBEGINBATTLE_B__20_3_OFFSET))(this, beginHollowData);
		}
	};
}
