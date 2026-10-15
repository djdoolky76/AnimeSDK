#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueGroupRow; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D602BB0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D601DA0)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D602060)
#define RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D602B40)
#define RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D602BA0)

namespace RPG::GameCore
{
	class DialogueGroupRow : public ::System::Object
	{
	public:
		::System::String* InteractTitle; // 0x10
		::System::String* ActPath; // 0x18
		::Il2CppArray<::System::UInt32>* ConditionIDs; // 0x20
		::RPG::GameCore::JsonEnum* IconType; // 0x28
		::System::UInt32 Priority; // 0x30
		::System::UInt32 GroupID; // 0x34
		::RPG::GameCore::DialogueGroupType GroupType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
