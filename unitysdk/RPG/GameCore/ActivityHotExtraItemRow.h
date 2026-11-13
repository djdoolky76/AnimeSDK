#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHotExtraItemRow; }

#define RPG_GAMECORE_ACTIVITYHOTEXTRAITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E519560)
#define RPG_GAMECORE_ACTIVITYHOTEXTRAITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E519290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotExtraItemRow_TypeDefinitionIndex = 11736;

	class ActivityHotExtraItemRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID HintDes; // 0x10
		::System::UInt32 ActivityID; // 0x20
		::System::UInt32 ItemID; // 0x24
		::System::UInt32 SortWeight; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID ItemDes; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTEXTRAITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHotExtraItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHotExtraItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTEXTRAITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
