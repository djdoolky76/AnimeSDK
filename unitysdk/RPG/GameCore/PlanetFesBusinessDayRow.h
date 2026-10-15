#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBusinessDayRow; }

#define RPG_GAMECORE_PLANETFESBUSINESSDAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D925000)
#define RPG_GAMECORE_PLANETFESBUSINESSDAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D924800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBusinessDayRow_TypeDefinitionIndex = 12229;

	class PlanetFesBusinessDayRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarEventNum; // 0x10
		::System::UInt32 BusinessDay; // 0x14
		::System::UInt32 MiddleBonusNum; // 0x18
		::System::UInt32 PamNum; // 0x1C
		::System::UInt32 LittleBonusNum; // 0x20
		::System::UInt32 GameNum; // 0x24
		::RPG::Client::TextID StartText; // 0x28
		::System::UInt32 LargeBonusNum; // 0x38
		::System::UInt32 NaturalDay; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesBusinessDayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesBusinessDayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUSINESSDAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
