#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SummonUnitUniqueGroup.h"
#include "unitysdk/RPG/GameCore/SummonerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDED1D0)
#define RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EDECDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitDataRow_TypeDefinitionIndex = 15363;

	class SummonUnitDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Boolean RemoveMazeBuffOnDestroy; // 0x1C
		::System::Boolean DestroyOnEnterBattle; // 0x1D
		::System::Boolean IsTeamSummon; // 0x1E
		::System::Boolean IsClient; // 0x1F
		::RPG::Client::TextID DefaultName; // 0x20
		::System::UInt32 MaxSummonCount; // 0x30
		::RPG::GameCore::SummonUnitUniqueGroup UniqueGroup; // 0x34
		::RPG::GameCore::SummonerType SummonerType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
