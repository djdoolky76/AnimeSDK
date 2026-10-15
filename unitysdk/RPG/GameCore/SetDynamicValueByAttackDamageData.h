#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackTotalDamageSumAlgo.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByAttackDamageData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA73A80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA73CB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA73A90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA73A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAttackDamageData_TypeDefinitionIndex = 23593;

	class SetDynamicValueByAttackDamageData : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AttackTotalDamageSumAlgo SumAlgorithm; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAttackDamageData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAttackDamageData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAttackDamageData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAttackDamageData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKDAMAGEDATA_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
