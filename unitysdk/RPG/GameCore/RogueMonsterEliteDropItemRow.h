#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMonsterEliteDropItemRow; }

#define RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AEE0)
#define RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA1ADD0)

namespace RPG::GameCore
{
	class RogueMonsterEliteDropItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterEliteDropItemDisplayList; // 0x10
		::System::UInt32 MonsterEliteDropItemID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMonsterEliteDropItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMonsterEliteDropItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
