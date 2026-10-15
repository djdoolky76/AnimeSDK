#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityNewbiePromoteRow; }

#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33FE60)
#define RPG_GAMECORE_ACTIVITYNEWBIEPROMOTEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33F7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityNewbiePromoteRow_TypeDefinitionIndex = 11225;

	class ActivityNewbiePromoteRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Desc; // 0x10
		::System::UInt32 FinishQuest; // 0x20
		::System::UInt32 SortID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 DisplayItem; // 0x2C
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
