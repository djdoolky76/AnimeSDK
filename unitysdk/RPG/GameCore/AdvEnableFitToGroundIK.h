#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEnableFitToGroundIK; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36ED00)
#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36ED10)
#define RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36ECD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableFitToGroundIK_TypeDefinitionIndex = 22402;

	class AdvEnableFitToGroundIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableFitToGroundIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableFitToGroundIK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableFitToGroundIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableFitToGroundIK*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEFITTOGROUNDIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
