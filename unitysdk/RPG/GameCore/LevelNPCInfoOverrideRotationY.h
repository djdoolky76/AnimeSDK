#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCInfoOverrideRotationY; }

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D78A520)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78A050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverrideRotationY_TypeDefinitionIndex = 17362;

	class LevelNPCInfoOverrideRotationY : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single RotY; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCInfoOverrideRotationY* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCInfoOverrideRotationY*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDEROTATIONY_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
