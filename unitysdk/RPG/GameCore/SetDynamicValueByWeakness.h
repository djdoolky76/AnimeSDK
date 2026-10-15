#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByWeakness; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7FAB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7FCB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7FAC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7FA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWeakness_TypeDefinitionIndex = 23116;

	class SetDynamicValueByWeakness : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
