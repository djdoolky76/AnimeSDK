#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByWeaknessCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAD590)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAD830)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAD5A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAD560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWeaknessCount_TypeDefinitionIndex = 23117;

	class SetDynamicValueByWeaknessCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* WriteTargetType; // 0x30
		::System::Boolean OnlyDefault; // 0x38
		::System::Byte _padding1[0x3];
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWeaknessCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWeaknessCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWeaknessCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWeaknessCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
