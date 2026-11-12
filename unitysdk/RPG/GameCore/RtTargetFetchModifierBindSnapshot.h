#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RtTargetFetchModifierBindSnapshot; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC791F0)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EC79380)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EC79300)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC79230)
#define RPG_GAMECORE_RTTARGETFETCHMODIFIERBINDSNAPSHOT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC79170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchModifierBindSnapshot_TypeDefinitionIndex = 24702;

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
