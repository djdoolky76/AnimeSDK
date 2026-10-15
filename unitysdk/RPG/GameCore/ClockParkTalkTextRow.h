#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkTalkTextRow; }

#define RPG_GAMECORE_CLOCKPARKTALKTEXTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599940)
#define RPG_GAMECORE_CLOCKPARKTALKTEXTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5997C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkTalkTextRow_TypeDefinitionIndex = 11194;

	class ClockParkTalkTextRow : public ::System::Object
	{
	public:
		::System::UInt32 TalkID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TalkText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALKTEXTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkTalkTextRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkTalkTextRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKTALKTEXTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
