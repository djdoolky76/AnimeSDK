#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceSplitObjectAnimMap; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE47C50)
#define RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE47B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSplitObjectAnimMap_TypeDefinitionIndex = 17745;

	class PerformanceSplitObjectAnimMap : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MainState; // 0x10
		::System::String* ChildState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceSplitObjectAnimMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceSplitObjectAnimMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESPLITOBJECTANIMMAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
