#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetTeam; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5123D0)
#define RPG_GAMECORE_BYTARGETTEAM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5125E0)
#define RPG_GAMECORE_BYTARGETTEAM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5125B0)
#define RPG_GAMECORE_BYTARGETTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5123E0)
#define RPG_GAMECORE_BYTARGETTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5123A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetTeam_TypeDefinitionIndex = 22553;

	class ByTargetTeam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetTeam* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETTEAM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
