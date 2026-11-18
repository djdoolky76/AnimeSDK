#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1892ED60)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleRoundResultPopWindowContext_TypeDefinitionIndex = 44290;

	class UIDuelBattleRoundResultPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClosed; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* ExtraRewards; // 0x30
		::System::Int32 TotalRounds; // 0x38
		::System::Int32 CurrentScore; // 0x3C
		::System::Int32 TargetScore; // 0x40
		::System::Int32 CurrentRound; // 0x44
		::System::Boolean IsSuccess; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 RemainingLives; // 0x4C
		::System::Int32 RoundReward; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLEROUNDRESULTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
