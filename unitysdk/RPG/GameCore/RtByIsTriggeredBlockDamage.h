#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtByIsTriggeredBlockDamage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA28110)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA28290)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA28260)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA28120)
#define RPG_GAMECORE_RTBYISTRIGGEREDBLOCKDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA280E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtByIsTriggeredBlockDamage_TypeDefinitionIndex = 24170;

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
