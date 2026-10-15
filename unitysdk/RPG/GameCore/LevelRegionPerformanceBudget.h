#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionPerformanceBudget; }

#define RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CBE50)
#define RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CBE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionPerformanceBudget_TypeDefinitionIndex = 17390;

	class LevelRegionPerformanceBudget : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionPerformanceBudget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionPerformanceBudget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONPERFORMANCEBUDGET_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
