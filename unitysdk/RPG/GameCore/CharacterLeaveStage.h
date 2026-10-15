#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterLeaveStage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERLEAVESTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D572370)
#define RPG_GAMECORE_CHARACTERLEAVESTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D572380)
#define RPG_GAMECORE_CHARACTERLEAVESTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D572330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterLeaveStage_TypeDefinitionIndex = 22747;

	class CharacterLeaveStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* ReasonKey; // 0x28
		::System::Boolean RefreshFormation; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLEAVESTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterLeaveStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterLeaveStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLEAVESTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterLeaveStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterLeaveStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLEAVESTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
