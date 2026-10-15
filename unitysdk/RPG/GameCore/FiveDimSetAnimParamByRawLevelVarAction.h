#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D8640)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D8650)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D8610)

namespace RPG::GameCore
{
	class FiveDimSetAnimParamByRawLevelVarAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::LittleGameDynamicVar* LevelVarName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYRAWLEVELVARACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
