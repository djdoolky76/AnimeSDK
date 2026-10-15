#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/ValueFromVariateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByVariateType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAACAC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAACD00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAACAD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAACA90)

namespace RPG::GameCore
{
	class SetDynamicValueByVariateType : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::ValueFromVariateType VariateType; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x24
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* WriteTargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByVariateType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByVariateType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByVariateType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByVariateType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
