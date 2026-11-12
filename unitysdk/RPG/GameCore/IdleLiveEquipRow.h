#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEQUIPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98E540)
#define RPG_GAMECORE_IDLELIVEEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E98E380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipRow_TypeDefinitionIndex = 11812;

	class IdleLiveEquipRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 SlotID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEquipRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEquipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
