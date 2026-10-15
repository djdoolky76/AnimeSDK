#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeVsTalkRow; }

#define RPG_GAMECORE_MATCHTHREEVSTALKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85DF70)
#define RPG_GAMECORE_MATCHTHREEVSTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85DD60)

namespace RPG::GameCore
{
	class MatchThreeVsTalkRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OpponentTalk; // 0x10
		::RPG::Client::TextID MyTalk; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEVSTALKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeVsTalkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeVsTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEVSTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
