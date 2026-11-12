#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertCycleRow; }

#define RPG_GAMECORE_COMICDESSERTCYCLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB220)
#define RPG_GAMECORE_COMICDESSERTCYCLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DAEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertCycleRow_TypeDefinitionIndex = 11221;

	class ComicDessertCycleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelIDList; // 0x10
		::RPG::Client::TextID TitleDesc; // 0x18
		::System::UInt32 ProgressAmount; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Title; // 0x30
		::System::UInt32 PerformanceID; // 0x40
		::System::UInt32 DeviceUpgradeCount; // 0x44
		::System::Single PriceMultiplier; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTCYCLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertCycleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertCycleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTCYCLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
