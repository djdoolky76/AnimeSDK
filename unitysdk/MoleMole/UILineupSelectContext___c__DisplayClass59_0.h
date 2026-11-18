#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class BPHGNMNLLHF;
class IBPCDEKGHCJ;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186B9880)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x186B9A50)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__4_OFFSET UNITYSDK_OFFSET(0x186BA660)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONGETSELECTROLECONTEXT_2_OFFSET UNITYSDK_OFFSET(0x186BA0A0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_3_OFFSET UNITYSDK_OFFSET(0x186BA440)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONSHOWDETAILINFO_0_OFFSET UNITYSDK_OFFSET(0x186B9890)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass59_0_TypeDefinitionIndex = 81297;

	class UILineupSelectContext___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* effectList; // 0x10
		::IBPCDEKGHCJ* config; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* conditionList; // 0x20
		::System::Int32 activityID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetActivityBattleQuestContext_g__OnShowDetailInfo_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONSHOWDETAILINFO_0_OFFSET))(this);
		}

		::System::Boolean _SetActivityBattleQuestContext_b__1(::ALDOKCCIFNB* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__1_OFFSET))(this, data);
		}

		::MoleMole::UIRoleSelectPageContext* _SetActivityBattleQuestContext_g__OnGetSelectRoleContext_2(::System::Int32 selectIndex, ::Il2CppArray<::BPHGNMNLLHF*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONGETSELECTROLECONTEXT_2_OFFSET))(this, selectIndex, currentSelected);
		}

		::MoleMole::UIActivePropsWindowContext* _SetActivityBattleQuestContext_g__OnPostGetBuddySelectContext_3(::MoleMole::UIActivePropsWindowContext* _context)
		{
			return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_3_OFFSET))(this, _context);
		}

		::System::Void _SetActivityBattleQuestContext_b__4(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS59_0__SETACTIVITYBATTLEQUESTCONTEXT_B__4_OFFSET))(this, data);
		}
	};
}
