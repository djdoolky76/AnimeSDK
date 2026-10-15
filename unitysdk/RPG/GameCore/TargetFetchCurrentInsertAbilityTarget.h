#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCurrentInsertAbilityTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61B10)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61BC0)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61B80)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB61B20)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentInsertAbilityTarget_TypeDefinitionIndex = 24027;

	class TargetFetchCurrentInsertAbilityTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTABILITYTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
