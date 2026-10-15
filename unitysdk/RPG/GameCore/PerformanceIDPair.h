#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceIDPair; }

#define RPG_GAMECORE_PERFORMANCEIDPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FC2F0)
#define RPG_GAMECORE_PERFORMANCEIDPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FC1F0)

namespace RPG::GameCore
{
	class PerformanceIDPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x10
		::System::UInt32 PerformanceID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEIDPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceIDPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEIDPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
