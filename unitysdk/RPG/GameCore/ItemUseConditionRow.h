#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemUseConditionRow; }

#define RPG_GAMECORE_ITEMUSECONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D79ED10)
#define RPG_GAMECORE_ITEMUSECONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D79E700)

namespace RPG::GameCore
{
	class ItemUseConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSECONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemUseConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemUseConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSECONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
