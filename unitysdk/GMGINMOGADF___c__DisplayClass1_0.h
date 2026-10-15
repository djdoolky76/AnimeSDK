#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPEJFIDCNPO;
namespace RPG::GameCore { class GameEntity; }

#define GMGINMOGADF___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD1AE0)
#define GMGINMOGADF___C__DISPLAYCLASS1_0__SELECTABLEENEMYALIVECOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x15AD2220)

inline static constexpr unsigned int GMGINMOGADF___c__DisplayClass1_0_TypeDefinitionIndex = 54361;

	class GMGINMOGADF___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::OPEJFIDCNPO* context; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGINMOGADF___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SelectableEnemyAliveCount_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GMGINMOGADF___C__DISPLAYCLASS1_0__SELECTABLEENEMYALIVECOUNT_B__0_OFFSET))(this, a1);
		}

	};
