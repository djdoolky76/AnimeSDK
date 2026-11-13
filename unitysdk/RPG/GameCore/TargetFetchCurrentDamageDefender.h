#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCurrentDamageDefender; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x206EB7E0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206EB870)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206EB850)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206EB7F0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206EB770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentDamageDefender_TypeDefinitionIndex = 24468;

	class TargetFetchCurrentDamageDefender : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
