#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageGroupRow; }

#define RPG_GAMECORE_MESSAGEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D877F10)
#define RPG_GAMECORE_MESSAGEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8772B0)

namespace RPG::GameCore
{
	class MessageGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MessageSectionIDList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::Boolean IsChatGroup; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 MessageContactsID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
