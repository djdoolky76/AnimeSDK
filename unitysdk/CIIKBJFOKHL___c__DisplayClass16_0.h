#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_RandomNSoldiers; }

#define CIIKBJFOKHL___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7ED10)
#define CIIKBJFOKHL___C__DISPLAYCLASS16_0___EVALUATERANDOMNSOLDIERS_B__0_OFFSET UNITYSDK_OFFSET(0xCF83590)

inline static constexpr unsigned int CIIKBJFOKHL___c__DisplayClass16_0_TypeDefinitionIndex = 77872;

	class CIIKBJFOKHL___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::CIIKBJFOKHL* __4__this; // 0x10
		::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* randomNSoldiersEvaluator; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __EvaluateRandomNSoldiers_b__0(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS16_0___EVALUATERANDOMNSOLDIERS_B__0_OFFSET))(this, a1);
		}

	};
