#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_OPTIONTALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E5000)
#define RPG_GAMECORE_OPTIONTALKINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D8E5040)
#define RPG_GAMECORE_OPTIONTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8E4CD0)

namespace RPG::GameCore
{
	class OptionTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OptionIconPath; // 0x10
		::System::UInt32 MenuItemExtraInfo; // 0x18
		::System::UInt32 SubMissionIDForMenuItem; // 0x1C
		::System::Boolean HasBeenTriggeredLogic; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 TalkSentenceID; // 0x24
		::RPG::Client::TextID OptionTextmapID; // 0x28
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x38
		::System::String* TriggerCustomString; // 0x40
		::System::Boolean HasTriggered; // 0x48
		::System::Boolean DeleteAfterSelection; // 0x49
		::System::Byte _padding1[0x2];
		::System::UInt32 SubmissionID; // 0x4C
		::System::String* FinishKey; // 0x50
		::System::UInt32 TalkEventID; // 0x58
		::System::Boolean IsSkipDefault; // 0x5C
		::System::Byte _padding2[0x3];
		::RPG::GameCore::PredicateConfig* VisibleFilter; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::OptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::OptionTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTIONTALKINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
