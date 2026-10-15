#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/ShieldValueType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByShield; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA7D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAA9D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA7E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA7A0)

namespace RPG::GameCore
{
	class SetDynamicValueByShield : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::ShieldValueType ValueType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByShield* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
