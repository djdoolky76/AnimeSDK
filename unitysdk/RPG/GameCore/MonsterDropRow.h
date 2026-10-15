#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class MonsterDropRow; }

#define RPG_GAMECORE_MONSTERDROPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B1250)
#define RPG_GAMECORE_MONSTERDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8B0B80)

namespace RPG::GameCore
{
	class MonsterDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::UInt32 WorldLevel; // 0x18
		::System::UInt32 MonsterTemplateID; // 0x1C
		::System::UInt32 AvatarExpReward; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterDropRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterDropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDROPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
