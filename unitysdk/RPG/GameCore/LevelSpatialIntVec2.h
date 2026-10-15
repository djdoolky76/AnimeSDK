#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelSpatialIntVec2; }

#define RPG_GAMECORE_LEVELSPATIALINTVEC2_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CE1D0)
#define RPG_GAMECORE_LEVELSPATIALINTVEC2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CE080)

namespace RPG::GameCore
{
	class LevelSpatialIntVec2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int16 x; // 0x10
		::System::Int16 y; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALINTVEC2_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelSpatialIntVec2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelSpatialIntVec2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSPATIALINTVEC2_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
