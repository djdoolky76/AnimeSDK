#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionSettingRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONSETTINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31ABA0)
#define RPG_GAMECORE_ACTIONSETTINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D31A4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionSettingRow_TypeDefinitionIndex = 13811;

	class ActionSettingRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* BlackListKeys; // 0x10
		::Il2CppArray<::System::String*>* SettableInControlTypes; // 0x18
		::System::String* ActionName; // 0x20
		::System::UInt32 ShowType; // 0x28
		::System::UInt32 GroupType; // 0x2C
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
