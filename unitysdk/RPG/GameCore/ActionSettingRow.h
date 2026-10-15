#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionSettingRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETTINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D348670)
#define RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D347FC0)

namespace RPG::GameCore
{
	class ActionSettingRow : public ::System::Object
	{
	public:
		::System::String* ActionName; // 0x10
		::Il2CppArray<::System::String*>* BlackListKeys; // 0x18
		::Il2CppArray<::System::String*>* SettableInControlTypes; // 0x20
		::System::UInt32 GroupType; // 0x28
		::System::UInt32 ShowType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionSettingRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionSettingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
