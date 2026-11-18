#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UGUIExtensions/UIFakePerspectiveBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_CDECHKHALJK_OFFSET UNITYSDK_OFFSET(0x1882C620)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_FEBFJAAMIDL_OFFSET UNITYSDK_OFFSET(0x1882C5E0)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_GKODCCNINEO_OFFSET UNITYSDK_OFFSET(0x1882C610)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_HEGNKEGFEJD_OFFSET UNITYSDK_OFFSET(0x1882C600)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_JFOPBAEFAIH_OFFSET UNITYSDK_OFFSET(0x1882C5F0)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_NANFCJLCHJC_OFFSET UNITYSDK_OFFSET(0x1882C5D0)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_SETUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C630)
#define MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1882C680)

namespace MoleMole::UGUIExtensions
{
	inline static constexpr unsigned int UIFakePerspective_TypeDefinitionIndex = 60663;

	class UIFakePerspective : public ::MoleMole::UGUIExtensions::UIFakePerspectiveBase
	{
	public:
		::System::Boolean forceImageUVFixOff; // 0x98
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 pointAOffset; // 0x9C
		::UnityEngine::Vector2 pointBOffset; // 0xA4
		::UnityEngine::Vector2 pointCOffset; // 0xAC
		::UnityEngine::Vector2 pointDOffset; // 0xB4
		::System::Boolean updateAlways; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 NANFCJLCHJC()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_NANFCJLCHJC_OFFSET))(this);
		}

		::UnityEngine::Vector2 FEBFJAAMIDL()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_FEBFJAAMIDL_OFFSET))(this);
		}

		::UnityEngine::Vector2 JFOPBAEFAIH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_JFOPBAEFAIH_OFFSET))(this);
		}

		::UnityEngine::Vector2 HEGNKEGFEJD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_HEGNKEGFEJD_OFFSET))(this);
		}

		::System::Boolean GKODCCNINEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_GKODCCNINEO_OFFSET))(this);
		}

		::System::Boolean CDECHKHALJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_CDECHKHALJK_OFFSET))(this);
		}

		::System::Void SetUpdate(::System::Boolean FPACDKNHAOP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UIFAKEPERSPECTIVE_SETUPDATE_OFFSET))(this, FPACDKNHAOP);
		}
	};
}
