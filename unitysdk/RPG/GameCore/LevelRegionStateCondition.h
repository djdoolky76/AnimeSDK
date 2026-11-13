#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionStateCondition; }

#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F24D680)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1F24D620)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F24D1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateCondition_TypeDefinitionIndex = 17549;

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
