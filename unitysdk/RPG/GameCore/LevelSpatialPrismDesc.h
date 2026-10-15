#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelSpatialPrismDesc; }

#define RPG_GAMECORE_LEVELSPATIALPRISMDESC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CE410)
#define RPG_GAMECORE_LEVELSPATIALPRISMDESC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CE3D0)

namespace RPG::GameCore
{
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
