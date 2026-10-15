#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEvilSmileSetTraceTargetAction; }

#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68F800)
#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68F810)
#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68F7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileSetTraceTargetAction_TypeDefinitionIndex = 18788;

	class FiveDimEvilSmileSetTraceTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsTraceCustomTarget; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 CustomTargetConfigID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
