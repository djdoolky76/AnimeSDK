#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class ELNDFIJMCJO;

#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EEEA400)
#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_START_OFFSET UNITYSDK_OFFSET(0x1EEEA190)
#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EEEA3A0)
#define MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEEA460)

namespace MoleMole::Arcade::RabGame
{
	inline static constexpr unsigned int RabGameEngine_TypeDefinitionIndex = 94933;

	class RabGameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ELNDFIJMCJO* DDKICDNCJCF; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMEENGINE_ONDESTROY_OFFSET))(this);
		}
	};
}
