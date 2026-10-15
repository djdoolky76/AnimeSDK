#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialScriptConditionRow; }

#define RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D758D20)
#define RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D758B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialScriptConditionRow_TypeDefinitionIndex = 13724;

	class HeartDialScriptConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 LockConditionID; // 0x10
		::System::UInt32 ScriptID; // 0x14
		::System::UInt32 FullConditionID; // 0x18
		::System::UInt32 ControlConditionID; // 0x1C
		::System::UInt32 MissingConditionID; // 0x20
		::System::UInt32 UnLockConditionID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialScriptConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialScriptConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALSCRIPTCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
