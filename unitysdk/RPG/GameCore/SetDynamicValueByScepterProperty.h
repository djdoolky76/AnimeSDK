#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByScepterProperty; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAA340)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAA570)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAA350)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAA310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByScepterProperty_TypeDefinitionIndex = 23105;

	class SetDynamicValueByScepterProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::RogueMagicScepterPropertyType Value; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByScepterProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByScepterProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
