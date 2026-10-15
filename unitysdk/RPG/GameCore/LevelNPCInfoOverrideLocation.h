#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCInfoOverrideLocation; }

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8000)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B7BA0)

namespace RPG::GameCore
{
	class LevelNPCInfoOverrideLocation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single PosX; // 0x10
		::System::Single PosY; // 0x14
		::System::Single PosZ; // 0x18
		::System::Single RotY; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCInfoOverrideLocation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCInfoOverrideLocation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDELOCATION_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
