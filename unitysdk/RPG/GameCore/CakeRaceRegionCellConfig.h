#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }

#define RPG_GAMECORE_CAKERACEREGIONCELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552840)
#define RPG_GAMECORE_CAKERACEREGIONCELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D552570)

namespace RPG::GameCore
{
	class CakeRaceRegionCellConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceCellType Type; // 0x10
		::RPG::MVector3 Position; // 0x14
		::Il2CppArray<::System::UInt32>* BlockDirection; // 0x20
		::Il2CppArray<::System::UInt32>* Params; // 0x28
		::System::Boolean Irreplaceable; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceRegionCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONCELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
