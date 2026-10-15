#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceStandalonePlayOverrideConfig; }

#define RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D906EF0)
#define RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D906D10)

namespace RPG::GameCore
{
	class PerformanceStandalonePlayOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsOverridePosition; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 OverridePosition; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceStandalonePlayOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESTANDALONEPLAYOVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
