#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GAEAILHCONM;
namespace RPG::GameCore { class ComicDessertDeviceUpgradeRow; }

#define RPG_GAMECORE_COMICDESSERTDEVICEUPGRADEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5144C0)
#define RPG_GAMECORE_COMICDESSERTDEVICEUPGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5141E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertDeviceUpgradeRow_TypeDefinitionIndex = 11245;

	class ComicDessertDeviceUpgradeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::GAEAILHCONM*>* AbilityList; // 0x10
		::System::UInt32 UpgradeCost; // 0x18
		::System::UInt32 Priority; // 0x1C
		::RPG::Client::TextID LevelDesc; // 0x20
		::System::UInt32 UnlockCycle; // 0x30
		::System::UInt32 Level; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTDEVICEUPGRADEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertDeviceUpgradeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertDeviceUpgradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTDEVICEUPGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
