#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define DPKGEGJBEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x12658270)

	class DPKGEGJBEFD : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* BOIICKMDBFH; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKGEGJBEFD_CTOR_OFFSET))(this);
		}

	};
