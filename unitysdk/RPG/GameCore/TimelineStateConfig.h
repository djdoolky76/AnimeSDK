#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimelineStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINESTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB89E10)
#define RPG_GAMECORE_TIMELINESTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB89C70)

namespace RPG::GameCore
{
	class TimelineStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single Percentage; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimelineStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimelineStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINESTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
