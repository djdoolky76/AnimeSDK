#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenSentenceRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E518590)
#define RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E518380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenSentenceRow_TypeDefinitionIndex = 11704;

	class ActivityHipplenSentenceRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID SentenceDesc; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TalkSentenceName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenSentenceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenSentenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENSENTENCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
