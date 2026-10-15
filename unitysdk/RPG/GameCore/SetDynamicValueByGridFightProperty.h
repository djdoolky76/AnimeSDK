#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightEquipMask.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByGridFightProperty; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA5150)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA53A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA5160)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA5110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightProperty_TypeDefinitionIndex = 22529;

	class SetDynamicValueByGridFightProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::GridFightPropertyType PropertyType; // 0x30
		::RPG::GameCore::GridFightEquipMask EquipMask; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
