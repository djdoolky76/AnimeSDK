#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesTaskRow; }

#define RPG_GAMECORE_PLANETFESTASKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92BBD0)
#define RPG_GAMECORE_PLANETFESTASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92B9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesTaskRow_TypeDefinitionIndex = 12227;

	class PlanetFesTaskRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TaskTips; // 0x10
		::System::UInt32 RandomGroupID; // 0x20
		::System::UInt32 TaskID; // 0x24
		::System::UInt32 QuestID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESTASKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesTaskRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesTaskRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESTASKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
