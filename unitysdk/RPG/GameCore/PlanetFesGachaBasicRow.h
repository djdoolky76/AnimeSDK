#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGachaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGachaBasicRow; }

#define RPG_GAMECORE_PLANETFESGACHABASICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D926300)
#define RPG_GAMECORE_PLANETFESGACHABASICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D926090)

namespace RPG::GameCore
{
	class PlanetFesGachaBasicRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MultiGachaUnlockIDList; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::System::UInt32 GachaID; // 0x20
		::System::UInt32 CostGemNum; // 0x24
		::System::UInt32 MultiGachaCount; // 0x28
		::RPG::GameCore::PlanetFesGachaType GachaType; // 0x2C
		::System::UInt32 CostItemID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHABASICROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGachaBasicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGachaBasicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGACHABASICROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
