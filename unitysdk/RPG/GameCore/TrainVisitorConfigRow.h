#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainVisitorConfigRow; }

#define RPG_GAMECORE_TRAINVISITORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC0AA80)
#define RPG_GAMECORE_TRAINVISITORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC092C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorConfigRow_TypeDefinitionIndex = 15366;

	class TrainVisitorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MissionID; // 0x10
		::System::Boolean ToastFinishMainMission; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID MessageCome; // 0x18
		::System::UInt32 VisitorID; // 0x28
		::System::UInt32 AvatarID; // 0x2C
		::System::UInt32 LockMissionID; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID MessageResident; // 0x38
		::RPG::Client::TextID MessageLeave; // 0x48
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
