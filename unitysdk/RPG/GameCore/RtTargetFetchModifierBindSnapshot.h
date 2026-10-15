#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RtTargetFetchModifierBindSnapshot; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA66970)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA66B00)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA66A80)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA669B0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA668F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchModifierBindSnapshot_TypeDefinitionIndex = 24243;

	class RtTargetFetchModifierBindSnapshot : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::RPG::GameCore::DynamicString* ModifierName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchModifierBindSnapshot*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
