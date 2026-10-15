#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAllStanceBreakEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5F8A0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5F930)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5F910)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5F8B0)
#define RPG_GAMECORE_TARGETFETCHALLSTANCEBREAKENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5F830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllStanceBreakEntity_TypeDefinitionIndex = 24000;

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
