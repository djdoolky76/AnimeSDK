#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsSubTargetOfHpSharedGroup; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5E80)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F6040)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F6010)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F5E90)
#define RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F5E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSubTargetOfHpSharedGroup_TypeDefinitionIndex = 23528;

	class ByIsSubTargetOfHpSharedGroup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSubTargetOfHpSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSUBTARGETOFHPSHAREDGROUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
