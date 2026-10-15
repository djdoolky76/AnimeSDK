#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelRegionStateCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionStateCustomValueCondition; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79E540)
#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D79E550)
#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79EAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateCustomValueCondition_TypeDefinitionIndex = 17383;

	class LevelRegionStateCustomValueCondition : public ::RPG::GameCore::LevelRegionStateCondition
	{
	public:
		::System::String* CustomValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateCustomValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateCustomValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateCustomValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateCustomValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
