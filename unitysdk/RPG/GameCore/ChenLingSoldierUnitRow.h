#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingSoldierUnitRow; }

#define RPG_GAMECORE_CHENLINGSOLDIERUNITROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91C980)
#define RPG_GAMECORE_CHENLINGSOLDIERUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F91C400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierUnitRow_TypeDefinitionIndex = 11071;

	class ChenLingSoldierUnitRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Atk; // 0x10
		::RPG::GameCore::FixPoint Hp; // 0x18
		::System::UInt32 SoldierID; // 0x20
		::System::UInt32 UnitLevel; // 0x24
		::RPG::GameCore::FixPoint CrtDMG; // 0x28
		::RPG::GameCore::FixPoint Range; // 0x30
		::System::Single ReadyScale; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Crt; // 0x40
		::RPG::GameCore::FixPoint MoveSpd; // 0x48
		::RPG::GameCore::FixPoint AtkSpd; // 0x50
		::System::UInt32 UnitID; // 0x58
		::System::Single Scale; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERUNITROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingSoldierUnitRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingSoldierUnitRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
