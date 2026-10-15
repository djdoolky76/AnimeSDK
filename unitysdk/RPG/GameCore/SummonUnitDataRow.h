#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SummonUnitUniqueGroup.h"
#include "unitysdk/RPG/GameCore/SummonerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB10390)
#define RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0FF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitDataRow_TypeDefinitionIndex = 15207;

	class SummonUnitDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::RPG::Client::TextID DefaultName; // 0x18
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::SummonUnitUniqueGroup UniqueGroup; // 0x2C
		::System::UInt32 MaxSummonCount; // 0x30
		::System::Boolean RemoveMazeBuffOnDestroy; // 0x34
		::System::Boolean IsTeamSummon; // 0x35
		::System::Boolean DestroyOnEnterBattle; // 0x36
		::System::Boolean IsClient; // 0x37
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
