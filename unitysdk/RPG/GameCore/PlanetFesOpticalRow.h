#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesOpticalRow; }

#define RPG_GAMECORE_PLANETFESOPTICALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6B380)
#define RPG_GAMECORE_PLANETFESOPTICALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE6B0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesOpticalRow_TypeDefinitionIndex = 12339;

	class PlanetFesOpticalRow : public ::System::Object
	{
	public:
		::System::UInt32 Type; // 0x10
		::System::UInt32 GotoConfig; // 0x14
		::System::UInt32 RealProgress; // 0x18
		::System::UInt32 ActivityModuleID; // 0x1C
		::RPG::Client::TextID Progress; // 0x20
		::System::UInt32 MainMissionID; // 0x30
		::System::UInt32 QuestID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESOPTICALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesOpticalRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesOpticalRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESOPTICALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
