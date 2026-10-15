#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationOption.h"
#include "unitysdk/RPG/GameCore/CustomTeamFormationParam.h"
#include "unitysdk/RPG/GameCore/EntityTeamRelationTypeMask.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CustomTeamFormationConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9E90)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E9EB0)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E9E40)

namespace RPG::GameCore
{
	class CustomTeamFormationConfig : public ::RPG::GameCore::CustomTeamFormationParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::VCameraState>* ActiveCameraStates; // 0x60
		::Il2CppArray<::RPG::GameCore::TeamFormationType>* ActiveTeamFormationTypes; // 0x68
		::Il2CppArray<::RPG::GameCore::TurnState>* ActiveTurnStates; // 0x70
		::RPG::GameCore::EntityTeamRelationTypeMask ActionEntityTypes; // 0x78
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* ActionEntityCharacterID; // 0x80
		::Il2CppArray<::RPG::GameCore::SkillType>* ActiveSkillTypes; // 0x88
		::Il2CppArray<::System::String*>* ActiveSkillNames; // 0x90
		::Il2CppArray<::System::String*>* InactiveSkillNames; // 0x98
		::Il2CppArray<::System::Boolean>* ActiveSkillSelectableStates; // 0xA0
		::RPG::GameCore::PredicateConfig* ActiveCondition; // 0xA8
		::RPG::GameCore::CustomTeamFormationOption Option; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomTeamFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomTeamFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomTeamFormationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomTeamFormationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
