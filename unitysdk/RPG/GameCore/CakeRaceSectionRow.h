#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceSectionRow; }

#define RPG_GAMECORE_CAKERACESECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D525490)
#define RPG_GAMECORE_CAKERACESECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D525320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSectionRow_TypeDefinitionIndex = 10993;

	class CakeRaceSectionRow : public ::System::Object
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::RPG::GameCore::CakeRaceRegionTag Tag; // 0x14
		::System::UInt32 RegionNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceSectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceSectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
