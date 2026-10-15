#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRacePickupItemConfig; }

#define RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552380)
#define RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D552090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePickupItemConfig_TypeDefinitionIndex = 18421;

	class CakeRacePickupItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRacePickupItemType Type; // 0x10
		::RPG::MVector3 Offset; // 0x14
		::System::UInt32 Radius; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRaceCellType>* CanPlaceCells; // 0x28
		::System::UInt32 DurationMs; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* PickupActions; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePickupItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePickupItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPICKUPITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
