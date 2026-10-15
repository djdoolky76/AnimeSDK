#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::GameCore { class GameEntity; }

#define LDMBNFAMCOI___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB6371B0)
#define LDMBNFAMCOI___C__DISPLAYCLASS3_0__REMOVEENEMY_B__0_OFFSET UNITYSDK_OFFSET(0xB6373E0)

inline static constexpr unsigned int LDMBNFAMCOI___c__DisplayClass3_0_TypeDefinitionIndex = 81002;

	class LDMBNFAMCOI___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEnemy_b__0(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__DISPLAYCLASS3_0__REMOVEENEMY_B__0_OFFSET))(this, a1);
		}

	};
