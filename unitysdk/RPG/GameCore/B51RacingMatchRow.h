#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingMatchRow; }

#define RPG_GAMECORE_B51RACINGMATCHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4065F0)
#define RPG_GAMECORE_B51RACINGMATCHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4062D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingMatchRow_TypeDefinitionIndex = 10958;

	class B51RacingMatchRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnemyCarIDList; // 0x10
		::Il2CppArray<::System::UInt32>* TeamRankList; // 0x18
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 LockDriverID; // 0x2C
		::System::Boolean IsTutorial; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGMATCHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingMatchRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingMatchRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGMATCHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
