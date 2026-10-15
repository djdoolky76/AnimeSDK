#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformancePropVisiableInfo; }

#define RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FD460)
#define RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FD370)

namespace RPG::GameCore
{
	class PerformancePropVisiableInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 PropID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformancePropVisiableInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformancePropVisiableInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEPROPVISIABLEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
