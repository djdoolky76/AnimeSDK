#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelSpatialPrismDesc; }

#define RPG_GAMECORE_LEVELSPATIALPRISMDESC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F24FAB0)
#define RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F24FA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSpatialPrismDesc_TypeDefinitionIndex = 17371;

	class LevelSpatialPrismDesc : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALPRISMDESC_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelSpatialPrismDesc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelSpatialPrismDesc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
