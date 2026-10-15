#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCollegeStageIntroRow; }

#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4547A0)
#define RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4545E0)

namespace RPG::GameCore
{
	class BattleCollegeStageIntroRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Introduction; // 0x10
		::System::UInt32 Index; // 0x20
		::System::UInt32 StageIntroDescID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleCollegeStageIntroRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleCollegeStageIntroRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECOLLEGESTAGEINTROROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
