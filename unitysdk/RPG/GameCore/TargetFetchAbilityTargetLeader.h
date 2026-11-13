#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAbilityTargetLeader; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x206E4590)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206E4690)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206E4660)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206E45A0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206E44C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityTargetLeader_TypeDefinitionIndex = 24369;

	class TargetFetchAbilityTargetLeader : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean ReadFromCache; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
