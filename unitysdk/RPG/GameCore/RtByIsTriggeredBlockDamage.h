#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByIsTriggeredBlockDamage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA559B0)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA55B30)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA55B00)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA559C0)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA55980)

namespace RPG::GameCore
{
	class RtByIsTriggeredBlockDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtByIsTriggeredBlockDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtByIsTriggeredBlockDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
