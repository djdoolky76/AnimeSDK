#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionStateCondition; }

#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CC300)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7CC2A0)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CBE60)

namespace RPG::GameCore
{
	class LevelRegionStateCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
