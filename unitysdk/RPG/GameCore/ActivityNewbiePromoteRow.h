#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36D930)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36D2A0)

namespace RPG::GameCore
{
	class ActivityNewbiePromoteRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishQuest; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 SortID; // 0x18
		::System::UInt32 DisplayItem; // 0x1C
		::RPG::Client::TextID Desc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityNewbiePromoteRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityNewbiePromoteRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
