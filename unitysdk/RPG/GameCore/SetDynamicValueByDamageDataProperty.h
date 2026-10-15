#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DamageDataPropertyType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByDamageDataProperty; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA3C00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA3E00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA3C10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByDamageDataProperty_TypeDefinitionIndex = 23090;

	class SetDynamicValueByDamageDataProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::DamageDataPropertyType Property; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByDamageDataProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByDamageDataProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDAMAGEDATAPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
