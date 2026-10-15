#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BackgroundTalkInfo; }
namespace RPG::GameCore { class SimpleTalkStyle; }

#define RPG_GAMECORE_BACKGROUNDTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4387E0)
#define RPG_GAMECORE_BACKGROUNDTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D438600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackgroundTalkInfo_TypeDefinitionIndex = 23382;

	class BackgroundTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x10
		::System::Boolean ProtectByVoice; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single ForceToNextTime; // 0x18
		::System::UInt32 TalkSentenceID; // 0x1C
		::RPG::GameCore::SimpleTalkStyle* Style; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BackgroundTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BackgroundTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
