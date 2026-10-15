#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAddDelayedSequenceAction; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADD00)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ADD30)
#define RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ADCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddDelayedSequenceAction_TypeDefinitionIndex = 18691;

	class FiveDimAddDelayedSequenceAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Delay; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::Boolean InterruptSameName; // 0x20
		::System::Boolean IgnoreFreezeTimeScale; // 0x21
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAddDelayedSequenceAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAddDelayedSequenceAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDDELAYEDSEQUENCEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
