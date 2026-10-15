#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithAttributeRank; }

#define CIIKBJFOKHL___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF86630)
#define CIIKBJFOKHL___C__DISPLAYCLASS18_0___EVALUATEATTRIBUTERANKSOLDIERS_B__1_OFFSET UNITYSDK_OFFSET(0xCF8B080)

	class CIIKBJFOKHL___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::CIIKBJFOKHL* __4__this; // 0x10
		::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* attributeRankEvaluator; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Single __EvaluateAttributeRankSoldiers_b__1(::ALMFLCJCHKP* a1)
		{
			return ((::System::Single(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS18_0___EVALUATEATTRIBUTERANKSOLDIERS_B__1_OFFSET))(this, a1);
		}

	};
