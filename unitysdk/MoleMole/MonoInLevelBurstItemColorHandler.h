#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x162E4DD0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_BIIBLIAEGBB_OFFSET UNITYSDK_OFFSET(0x162E5320)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_CFLCIBOMOLH_OFFSET UNITYSDK_OFFSET(0x162E4F70)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_DJDFLPPNCCH_OFFSET UNITYSDK_OFFSET(0x162E5330)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x162E53C0)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_MLFBLINBIPN_OFFSET UNITYSDK_OFFSET(0x162E5310)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x162E4F20)
#define MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162E52A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBurstItemColorHandler_TypeDefinitionIndex = 69916;

	class MonoInLevelBurstItemColorHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::Color _greyColor; // 0x18
		::UnityEngine::Color _goldColor; // 0x28
		::UnityEngine::Color _fadeOutColor; // 0x38
		::System::Single _colorLerp; // 0x48
		::System::Single _fadeLerp; // 0x4C
		::UnityEngine::UI::Image* AMOKNNINMON; // 0x50
		::UnityEngine::UI::Text* DOMEBMIHODI; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::UI::Text* MLFBLINBIPN()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_MLFBLINBIPN_OFFSET))(this);
		}

		::UnityEngine::UI::Image* BIIBLIAEGBB()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_BIIBLIAEGBB_OFFSET))(this);
		}

		::System::Void CFLCIBOMOLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_CFLCIBOMOLH_OFFSET))(this);
		}

		::System::Void DJDFLPPNCCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_DJDFLPPNCCH_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBURSTITEMCOLORHANDLER_GPGLNOBDBGJ_OFFSET))(this);
		}
	};
}
