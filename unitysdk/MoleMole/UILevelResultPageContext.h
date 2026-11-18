#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OJHHBGPMJAK.h"

class AEPIGACPJDL;
class EHKBIMEMOCP;
class GDCLGFPAMDH;
class JFFIPPCGFPF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET UNITYSDK_OFFSET(0x17F88500)
#define MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F88560)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageContext_TypeDefinitionIndex = 76092;

	class UILevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnExitBattleAction; // 0x28
		::System::Action* OnContinueAction; // 0x30
		::ELKFEFPPPFL_2<::System::UInt32, ::EHKBIMEMOCP*>* RawRewardItemReasonMap; // 0x38
		::System::Action* OnFairyBtnAction; // 0x40
		::GDCLGFPAMDH* dungeonDoneRet; // 0x48
		::System::Action* OnRestartBattleAction; // 0x50
		::System::Collections::Generic::HashSet_1<::System::Int32>* additionalUpItemSet; // 0x58
		::System::Action* OnStartFadeInFinsh; // 0x60
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::AEPIGACPJDL*>* FightRewards; // 0x68
		::ELKFEFPPPFL_2<::System::UInt32, ::JFFIPPCGFPF*>* RawRewardReasonItemMap; // 0x70
		::System::Boolean Procedure; // 0x78
		::System::Boolean IsOvernight; // 0x79
		::System::Byte _padding0[0x2];
		::OJHHBGPMJAK ShowType; // 0x7C
		::System::Single delayExitTime; // 0x80
		::System::Boolean isWin; // 0x84
		::System::Boolean canRevive; // 0x85
		::System::Boolean enableDelayExit; // 0x86

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsAdditionaUpItem(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTEXT_ISADDITIONAUPITEM_OFFSET))(this, itemId);
		}
	};
}
