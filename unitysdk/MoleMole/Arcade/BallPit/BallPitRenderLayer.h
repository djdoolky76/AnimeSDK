#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGPPGMMOPB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EB5C240)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1EB5C1E0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYTOALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1EB5BE50)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_GET_MAINRENDERER_OFFSET UNITYSDK_OFFSET(0x1EB5BE40)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_GPPPKGPJLOO_OFFSET UNITYSDK_OFFSET(0x1EB5C340)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_PLFJGPLFMHD_OFFSET UNITYSDK_OFFSET(0x1EB5C460)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C410)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitRenderLayer_TypeDefinitionIndex = 95058;

	class BallPitRenderLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MAGPPGMMOPB Layer; // 0x18
		::System::Int32 SubLayer; // 0x1C
		::UnityEngine::Renderer* _ENHNAHDPEMF_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_MainRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_GET_MAINRENDERER_OFFSET))(this);
		}

		::System::Void CopyToAllChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYTOALLCHILDREN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void CopyFrom(::MoleMole::Arcade::BallPit::BallPitRenderLayer* KMOHKCADPNA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::BallPit::BallPitRenderLayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_COPYFROM_OFFSET))(this, KMOHKCADPNA);
		}

		::System::Void GPPPKGPJLOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_GPPPKGPJLOO_OFFSET))(this);
		}

		::System::Void PLFJGPLFMHD(::UnityEngine::Renderer* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITRENDERLAYER_PLFJGPLFMHD_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
