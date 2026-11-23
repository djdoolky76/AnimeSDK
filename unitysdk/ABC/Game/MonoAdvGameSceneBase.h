#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/MonoGameScene.h"

class A8D04F838F2E8F19;

#define ABC_GAME_MONOADVGAMESCENEBASE_A73CA428AC86C497_OFFSET UNITYSDK_OFFSET(0x18C8280)
#define ABC_GAME_MONOADVGAMESCENEBASE_F57EC1F3E289A2F7_OFFSET UNITYSDK_OFFSET(0x18C8310)
#define ABC_GAME_MONOADVGAMESCENEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8320)

namespace ABC::Game
{
	inline static constexpr unsigned int MonoAdvGameSceneBase_TypeDefinitionIndex = 1363;

	class MonoAdvGameSceneBase : public ::ABC::Game::MonoGameScene
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOADVGAMESCENEBASE__CTOR_OFFSET))(this);
		}

		::A8D04F838F2E8F19* F57EC1F3E289A2F7()
		{
			return ((::A8D04F838F2E8F19*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOADVGAMESCENEBASE_F57EC1F3E289A2F7_OFFSET))(this);
		}

		::A8D04F838F2E8F19* A73CA428AC86C497()
		{
			return ((::A8D04F838F2E8F19*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOADVGAMESCENEBASE_A73CA428AC86C497_OFFSET))(this);
		}
	};
}
