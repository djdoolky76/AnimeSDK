#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchProjectileHitEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37880)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB37910)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB378F0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB37890)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB37810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchProjectileHitEntity_TypeDefinitionIndex = 23920;

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
