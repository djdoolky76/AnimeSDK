#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamLimitTypeEventRow; }

#define RPG_GAMECORE_TEAMLIMITTYPEEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7B400)
#define RPG_GAMECORE_TEAMLIMITTYPEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB7B1E0)

namespace RPG::GameCore
{
	class TeamLimitTypeEventRow : public ::System::Object
	{
	public:
		::RPG::GameCore::TeamLimitType LimitType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ToastDesc; // 0x18
		::RPG::Client::TextID LimitDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITTYPEEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamLimitTypeEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamLimitTypeEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMLIMITTYPEEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
