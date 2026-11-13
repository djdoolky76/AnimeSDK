#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainVisitorConfigRow; }

#define RPG_GAMECORE_TRAINVISITORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E314360)
#define RPG_GAMECORE_TRAINVISITORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E312BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainVisitorConfigRow_TypeDefinitionIndex = 15522;

	class TrainVisitorConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MessageLeave; // 0x10
		::RPG::Client::TextID MessageResident; // 0x20
		::System::UInt32 LockMissionID; // 0x30
		::System::UInt32 AvatarID; // 0x34
		::System::UInt32 VisitorID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MessageCome; // 0x40
		::System::Boolean ToastFinishMainMission; // 0x50
		::System::Byte _padding1[0x3];
		::System::UInt32 MissionID; // 0x54
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
