#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDUELBATTLEROUNDBEGINPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1757FBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleRoundBeginPopWindowContext_TypeDefinitionIndex = 92739;

	class UIDuelBattleRoundBeginPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnShown; // 0x28
		::System::Collections::Generic::List_1<::System::Boolean>* BossNodes; // 0x30
		::System::Action_1<::System::Action*>* OnBeforeClose; // 0x38
		::System::Action* OnClosed; // 0x40
		::System::Collections::Generic::List_1<::System::Boolean>* EliteNodes; // 0x48
		::System::Boolean IsBattlePhase; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 TotalRounds; // 0x54
		::System::Int32 TargetScore; // 0x58
		::System::Int32 CurrentRound; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEROUNDBEGINPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
