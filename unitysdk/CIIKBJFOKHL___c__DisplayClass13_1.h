#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;

#define CIIKBJFOKHL___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7E3D0)
#define CIIKBJFOKHL___C__DISPLAYCLASS13_1___FILTERSOLDIERBYINITPOSITION_B__6_OFFSET UNITYSDK_OFFSET(0xCF83550)

inline static constexpr unsigned int CIIKBJFOKHL___c__DisplayClass13_1_TypeDefinitionIndex = 77871;

	template <typename T>
	class CIIKBJFOKHL___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBattleInitPosition maxPosition; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS13_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __FilterSoldierByInitPosition_b__6(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CIIKBJFOKHL___C__DISPLAYCLASS13_1___FILTERSOLDIERBYINITPOSITION_B__6_OFFSET))(this, a1);
		}

	};
