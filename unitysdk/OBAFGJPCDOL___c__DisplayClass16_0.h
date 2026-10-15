#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAFGJPCDOL;
namespace RPG::GameCore { class GameEntity; }

#define OBAFGJPCDOL___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD30C70)
#define OBAFGJPCDOL___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xBD32030)

inline static constexpr unsigned int OBAFGJPCDOL___c__DisplayClass16_0_TypeDefinitionIndex = 71738;

	class OBAFGJPCDOL___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::OBAFGJPCDOL* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupBossEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET))(this);
		}

	};
