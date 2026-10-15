#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReenterStage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREENTERSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A120)
#define RPG_GAMECORE_CHARACTERREENTERSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54A130)
#define RPG_GAMECORE_CHARACTERREENTERSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReenterStage_TypeDefinitionIndex = 22748;

	class CharacterReenterStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ReasonKey; // 0x20
		::System::Boolean RefreshFormation; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREENTERSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReenterStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReenterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREENTERSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReenterStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReenterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREENTERSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
