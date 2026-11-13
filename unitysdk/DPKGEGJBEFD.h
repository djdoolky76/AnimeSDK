#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define DPKGEGJBEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x181AD640)

inline static constexpr unsigned int DPKGEGJBEFD_TypeDefinitionIndex = 58423;

	class DPKGEGJBEFD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::UnityEngine::GameObject* BOIICKMDBFH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKGEGJBEFD_CTOR_OFFSET))(this);
		}

	};
