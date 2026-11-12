#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBAFGJPCDOL;
namespace RPG::GameCore { class GameEntity; }

#define OBAFGJPCDOL___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC634500)
#define OBAFGJPCDOL___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xC635930)

inline static constexpr unsigned int OBAFGJPCDOL___c__DisplayClass16_0_TypeDefinitionIndex = 73729;

	class OBAFGJPCDOL___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::OBAFGJPCDOL* __4__this; // 0x10
		::RPG::GameCore::GameEntity* entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupBossEntity_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET))(this);
		}

	};
