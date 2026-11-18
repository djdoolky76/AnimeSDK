#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIBallGameMainPageController_BallPitInitGameContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F5B8E80)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_CAGHAEGDDEB_OFFSET UNITYSDK_OFFSET(0x1F5BA010)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_GENERATEMAINPAGECONTEXT_OFFSET UNITYSDK_OFFSET(0x1F5B9280)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_GPEGJFJMEBB_OFFSET UNITYSDK_OFFSET(0x1F5B8F10)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F5B9240)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_START_OFFSET UNITYSDK_OFFSET(0x1F5B8EC0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5B9FC0)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitGameLauncher_TypeDefinitionIndex = 95052;

	class BallPitGameLauncher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_ONDESTROY_OFFSET))(this);
		}

		::MoleMole::UIBallGameMainPageController_BallPitInitGameContext* GenerateMainPageContext()
		{
			return ((::MoleMole::UIBallGameMainPageController_BallPitInitGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_GENERATEMAINPAGECONTEXT_OFFSET))(this);
		}

		::System::Void CAGHAEGDDEB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_CAGHAEGDDEB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void GPEGJFJMEBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITGAMELAUNCHER_GPEGJFJMEBB_OFFSET))(this);
		}
	};
}
