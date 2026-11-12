#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainVisitorConfigRow; }

#define RPG_GAMECORE_TRAINVISITORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4B5D0)
#define RPG_GAMECORE_TRAINVISITORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE49E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorConfigRow_TypeDefinitionIndex = 15522;

	class TrainVisitorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 LockMissionID; // 0x10
		::System::UInt32 MissionID; // 0x14
		::RPG::Client::TextID MessageResident; // 0x18
		::RPG::Client::TextID MessageLeave; // 0x28
		::RPG::Client::TextID MessageCome; // 0x38
		::System::UInt32 VisitorID; // 0x48
		::System::UInt32 AvatarID; // 0x4C
		::System::Boolean ToastFinishMainMission; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainVisitorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainVisitorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINVISITORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
