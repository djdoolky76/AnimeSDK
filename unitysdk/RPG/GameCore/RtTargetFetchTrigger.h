#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtTargetFetchTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3AAF0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3AD10)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3ACC0)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3AB00)
#define RPG_GAMECORE_RTTARGETFETCHTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3AAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchTrigger_TypeDefinitionIndex = 24241;

	class RtTargetFetchTrigger : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Owner; // 0x10
		::System::Boolean OnlySearchCurrentModifier; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x20
		::System::String* TriggerName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetFetchTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetFetchTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHTRIGGER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
