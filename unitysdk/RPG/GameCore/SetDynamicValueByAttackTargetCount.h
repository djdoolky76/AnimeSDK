#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByAttackTargetCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA1590)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA1750)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA15A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA1560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAttackTargetCount_TypeDefinitionIndex = 23085;

	class SetDynamicValueByAttackTargetCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* Attacker; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
