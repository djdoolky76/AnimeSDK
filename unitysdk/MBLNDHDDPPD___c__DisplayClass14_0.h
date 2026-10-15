#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define MBLNDHDDPPD___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB85FE40)
#define MBLNDHDDPPD___C__DISPLAYCLASS14_0__EVALUATE_COMPLEXSKILLAISOURCEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0xB866890)

inline static constexpr unsigned int MBLNDHDDPPD___c__DisplayClass14_0_TypeDefinitionIndex = 54355;

	class MBLNDHDDPPD___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* pFromEntity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLNDHDDPPD___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Evaluate_ComplexSkillAISourceValue_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MBLNDHDDPPD___C__DISPLAYCLASS14_0__EVALUATE_COMPLEXSKILLAISOURCEVALUE_B__0_OFFSET))(this, a1);
		}

	};
