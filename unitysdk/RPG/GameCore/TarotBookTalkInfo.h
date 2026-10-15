#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookTalkInfo; }

#define RPG_GAMECORE_TAROTBOOKTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A170)
#define RPG_GAMECORE_TAROTBOOKTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4A0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookTalkInfo_TypeDefinitionIndex = 21142;

	class TarotBookTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
