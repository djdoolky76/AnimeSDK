#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEquipRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIREQUIPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91B9D0)
#define RPG_GAMECORE_PIXAIREQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91AAE0)

namespace RPG::GameCore
{
	class PixAirEquipRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* TagList; // 0x10
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* AffectedTaglist; // 0x18
		::System::String* EquipIcon; // 0x20
		::System::Boolean IsCore; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 EquipID; // 0x40
		::RPG::GameCore::PixAirSlotType SlotType; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEquipRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEquipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
