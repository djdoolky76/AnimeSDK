#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLevelEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x206ED250)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206ED2E0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206ED2C0)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206ED260)
#define RPG_GAMECORE_TARGETFETCHLEVELENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206ED1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLevelEntity_TypeDefinitionIndex = 24382;

	class TargetFetchLevelEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLevelEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLevelEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLEVELENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
