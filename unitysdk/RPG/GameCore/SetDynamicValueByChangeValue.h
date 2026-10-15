#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByChangeValue; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA754D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA75690)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA754E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA754A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByChangeValue_TypeDefinitionIndex = 23095;

	class SetDynamicValueByChangeValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::ChangeValueType ValueType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByChangeValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByChangeValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
