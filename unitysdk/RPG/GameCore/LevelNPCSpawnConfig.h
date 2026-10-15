#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelEntitySpawnConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCSpawnConfig; }

#define RPG_GAMECORE_LEVELNPCSPAWNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78AEA0)
#define RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D78AEB0)
#define RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D789D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCSpawnConfig_TypeDefinitionIndex = 17271;

	class LevelNPCSpawnConfig : public ::RPG::GameCore::LevelEntitySpawnConfig
	{
	public:
		::System::Boolean TryCapture; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single CaptureDistanceTolerance; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSPAWNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCSpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCSpawnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCSPAWNCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
