#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }

#define RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D67FCD0)
#define RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D67FCE0)
#define RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D67FBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimActionBubbleTalkInfo_TypeDefinitionIndex = 18773;

	class FiveDimActionBubbleTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DialogueTextmapID; // 0x18
		::System::UInt32 TalkSentenceID; // 0x28
		::System::Boolean EnableVoice; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimActionBubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimActionBubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimActionBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACTIONBUBBLETALKINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
