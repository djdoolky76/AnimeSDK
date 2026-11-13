#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharLightToEntityDir; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F85DB00)
#define RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F85DB30)
#define RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F85DAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharLightToEntityDir_TypeDefinitionIndex = 22265;

	class SetCharLightToEntityDir : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 RotationOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharLightToEntityDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharLightToEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharLightToEntityDir* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharLightToEntityDir*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARLIGHTTOENTITYDIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
