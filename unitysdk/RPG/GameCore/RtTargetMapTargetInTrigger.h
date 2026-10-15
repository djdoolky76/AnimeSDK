#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtTargetMapTargetInTrigger; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3E3E0)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3E550)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3E500)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3E3F0)
#define RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3E390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapTargetInTrigger_TypeDefinitionIndex = 24246;

	class RtTargetMapTargetInTrigger : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* TriggerTags; // 0x10
		::System::String* TriggerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapTargetInTrigger* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapTargetInTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPTARGETINTRIGGER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
