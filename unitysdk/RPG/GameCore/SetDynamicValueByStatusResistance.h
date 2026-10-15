#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByStatusResistance; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7E130)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7E330)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7E140)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7E100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusResistance_TypeDefinitionIndex = 23579;

	class SetDynamicValueByStatusResistance : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStatusResistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStatusResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStatusResistance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStatusResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
