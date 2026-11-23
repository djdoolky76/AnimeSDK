#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Game/MonoBaseGameScene.h"

class A8D04F838F2E8F19;

#define ABC_GAME_MONOGAMESCENE_A73CA428AC86C497_OFFSET UNITYSDK_OFFSET(0x1EBC560)
#define ABC_GAME_MONOGAMESCENE_F57EC1F3E289A2F7_OFFSET UNITYSDK_OFFSET(0x1EBC5F0)
#define ABC_GAME_MONOGAMESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1708400)

namespace ABC::Game
{
	inline static constexpr unsigned int MonoGameScene_TypeDefinitionIndex = 6775;

	class MonoGameScene : public ::ABC::Game::MonoBaseGameScene
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMESCENE__CTOR_OFFSET))(this);
		}

		::A8D04F838F2E8F19* F57EC1F3E289A2F7()
		{
			return ((::A8D04F838F2E8F19*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMESCENE_F57EC1F3E289A2F7_OFFSET))(this);
		}

		::A8D04F838F2E8F19* A73CA428AC86C497()
		{
			return ((::A8D04F838F2E8F19*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_MONOGAMESCENE_A73CA428AC86C497_OFFSET))(this);
		}
	};
}
