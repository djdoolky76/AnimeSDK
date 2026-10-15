#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HealDataPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSetDynamicValueByHealDataProperty; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA63020)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA63220)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA63030)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA62FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSetDynamicValueByHealDataProperty_TypeDefinitionIndex = 24176;

	class RtSetDynamicValueByHealDataProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::HealDataPropertyType Property; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
