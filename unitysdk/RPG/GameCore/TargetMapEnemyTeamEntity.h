#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapEnemyTeamEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6B6B0)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6B740)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6B720)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6B6C0)
#define RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6B640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapEnemyTeamEntity_TypeDefinitionIndex = 23945;

	class TargetMapEnemyTeamEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapEnemyTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapEnemyTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPENEMYTEAMENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
