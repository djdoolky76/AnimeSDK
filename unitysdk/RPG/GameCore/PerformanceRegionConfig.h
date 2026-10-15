#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CoverRegionList; }
namespace RPG::GameCore { class PerformanceRegionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCEREGIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D900C80)
#define RPG_GAMECORE_PERFORMANCEREGIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D900B30)

namespace RPG::GameCore
{
	class PerformanceRegionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PerformanceID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CoverRegionList*>* Entries; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREGIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceRegionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceRegionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREGIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
