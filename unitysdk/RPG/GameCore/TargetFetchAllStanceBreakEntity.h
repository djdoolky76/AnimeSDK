#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAllStanceBreakEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x206E97F0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206E9880)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206E9860)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206E9800)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206E9780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllStanceBreakEntity_TypeDefinitionIndex = 24458;

	class TargetFetchAllStanceBreakEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllStanceBreakEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllStanceBreakEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
