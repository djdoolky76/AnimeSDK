#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole::Arcade::BallPit { class BallPitGameEngine; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_FAMEHEDPPPP_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x1EEC8000)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_FAMEHEDPPPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC7FF0)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameEngine_FAMEHEDPPPP_TypeDefinitionIndex = 95054;

	class BallPitGameEngine_FAMEHEDPPPP : public ::System::Object
	{
	public:
		::MoleMole::Arcade::BallPit::BallPitGameEngine* KLHPEBKNIFB; // 0x10
		::System::Int32 EHDMGHBOJJM; // 0x18
		::System::Int32 LEHABHCOMGH; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_FAMEHEDPPPP__CTOR_OFFSET))(this);
		}

		::System::Void CJPGBDMDBEF(::Foundation::AssetPath PIIPCLCCOIG, ::UnityEngine::GameObject* LAPHHAGMPIJ)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMEENGINE_FAMEHEDPPPP_CJPGBDMDBEF_OFFSET))(this, PIIPCLCCOIG, LAPHHAGMPIJ);
		}
	};
}
