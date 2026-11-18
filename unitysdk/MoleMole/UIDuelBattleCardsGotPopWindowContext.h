#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDUELBATTLECARDSGOTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB8890)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleCardsGotPopWindowContext_TypeDefinitionIndex = 46412;

	class UIDuelBattleCardsGotPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClosed; // 0x28
		::System::Action_1<::System::Action*>* OnConfirm; // 0x30
		::System::Action* OnShown; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* CardIds; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDSGOTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
