#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchProjectileHitEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE14400)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE14490)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE14470)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE14410)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE14390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitEntity_TypeDefinitionIndex = 24378;

	class TargetFetchProjectileHitEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
