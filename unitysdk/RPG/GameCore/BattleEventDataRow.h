#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEventDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45AA30)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D45A4A0)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D45A750)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D45A420)
#define RPG_GAMECORE_BATTLEEVENTDATAROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D45A480)

namespace RPG::GameCore
{
	class BattleEventDataRow : public ::System::Object
	{
	public:
		::System::String* Config; // 0x10
		::System::String* Prefab; // 0x18
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x20
		::System::String* BEActionBarPrefab; // 0x28
		::System::String* BasePoint; // 0x30
		::System::String* LevelAreaPrefab; // 0x38
		::System::UInt32 BattleEventID; // 0x40
		::System::Boolean IsSPReserved; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
