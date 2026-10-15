#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelUpEvolveBuildGear; }

#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A1570)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A1580)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A1540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUpEvolveBuildGear_TypeDefinitionIndex = 23100;

	class LevelUpEvolveBuildGear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 EvolveGearType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelUpEvolveBuildGear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelUpEvolveBuildGear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
