#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesUseItemRow; }

#define RPG_GAMECORE_PLANETFESUSEITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92BF40)
#define RPG_GAMECORE_PLANETFESUSEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92BDB0)

namespace RPG::GameCore
{
	class PlanetFesUseItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UseParams; // 0x10
		::RPG::GameCore::PlanetFesItemUseType UseType; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUSEITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesUseItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUSEITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
