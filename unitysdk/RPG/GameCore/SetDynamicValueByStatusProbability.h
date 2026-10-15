#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByStatusProbability; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAB790)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAB990)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAB7A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAB760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusProbability_TypeDefinitionIndex = 23580;

	class SetDynamicValueByStatusProbability : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStatusProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStatusProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
