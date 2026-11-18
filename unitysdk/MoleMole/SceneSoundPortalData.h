#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundPolygonData; }
namespace System { class String; }

#define MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCENTER_OFFSET UNITYSDK_OFFSET(0x1C0BDDD0)
#define MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCORNERSWORLD_OFFSET UNITYSDK_OFFSET(0x1C0BDE70)
#define MOLEMOLE_SCENESOUNDPORTALDATA_NEPEAAGJBEN_OFFSET UNITYSDK_OFFSET(0x1C0BE6B0)
#define MOLEMOLE_SCENESOUNDPORTALDATA_PEDMHMEGFPI_OFFSET UNITYSDK_OFFSET(0x1C0BE450)
#define MOLEMOLE_SCENESOUNDPORTALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BE3E0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPortalData_TypeDefinitionIndex = 83746;

	class SceneSoundPortalData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* portalKey; // 0x18
		::System::Boolean portalEnabled; // 0x20
		::System::Byte _padding0[0x7];
		::MoleMole::SceneSoundPolygonData* roomA; // 0x28
		::MoleMole::SceneSoundPolygonData* roomB; // 0x30
		::System::Single transmission; // 0x38
		::System::Boolean isOneWay; // 0x3C
		::System::Byte _padding1[0x3];
		::System::Single openingWidth; // 0x40
		::System::Single openingHeight; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetOpeningCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCENTER_OFFSET))(this);
		}

		::System::Void GetOpeningCornersWorld(::Il2CppArray<::UnityEngine::Vector3>* IAPHBCJMGFE)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCORNERSWORLD_OFFSET))(this, IAPHBCJMGFE);
		}

		::System::Boolean PEDMHMEGFPI(::MoleMole::SceneSoundPolygonData* EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_PEDMHMEGFPI_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean NEPEAAGJBEN(::MoleMole::SceneSoundPolygonData* EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_NEPEAAGJBEN_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
