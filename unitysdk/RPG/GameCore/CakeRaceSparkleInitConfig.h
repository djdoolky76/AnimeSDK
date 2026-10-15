#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceSparkleInitConfig; }

#define RPG_GAMECORE_CAKERACESPARKLEINITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552F90)
#define RPG_GAMECORE_CAKERACESPARKLEINITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5505D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSparkleInitConfig_TypeDefinitionIndex = 18426;

	class CakeRaceSparkleInitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GridX; // 0x10
		::System::UInt32 GridZ; // 0x14
		::System::Int32 Y; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRaceCellType>* ForbiddenAppearCell; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESPARKLEINITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceSparkleInitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceSparkleInitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESPARKLEINITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
