#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAA72D0)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xDAA80E0)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xDAA8140)

namespace RPG::Client
{
	class PerformanceSkipUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* dispatch; // 0x10
		::RPG::GameCore::ELevelPerformanceType performanceType; // 0x18
		::System::Guid guid; // 0x1C
		::System::UInt32 performanceID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPerformanceSkipDialog_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__0_OFFSET))(this, a1);
		}

		::System::Void _ShowPerformanceSkipDialog_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__1_OFFSET))(this, a1);
		}

	};
}
