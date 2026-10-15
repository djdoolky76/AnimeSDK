#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchProjectileHitPos; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB65270)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB65300)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB652E0)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB65280)
#define RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB65200)

namespace RPG::GameCore
{
	class TargetFetchProjectileHitPos : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchProjectileHitPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchProjectileHitPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROJECTILEHITPOS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
