#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class GPOCDKHHGFG;
class MKFANIOOGFA_HGOHPMBOAIC;
class MKFANIOOGFA_PKPGICNJDHK;
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_CANROTATION_OFFSET UNITYSDK_OFFSET(0x183F7F10)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_MAPSIZECURRENT_OFFSET UNITYSDK_OFFSET(0x183F7EA0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_SUBMAPDATA_OFFSET UNITYSDK_OFFSET(0x183F7E70)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_WORLDSPACEPOS_OFFSET UNITYSDK_OFFSET(0x183F7ED0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_WORLDSPACEROTATION_OFFSET UNITYSDK_OFFSET(0x183F7EE0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x183F7F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MapIconModel_Simple_TypeDefinitionIndex = 90448;

	class UIMiniScapeMapPage_MapWidgetController_MapIconModel_Simple : public ::System::Object
	{
	public:
		::LJHFMILANJA_1<::UnityEngine::Vector3>* _worldSpacePos; // 0x10
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _uiController; // 0x18
		::MKFANIOOGFA_HGOHPMBOAIC* _iconKeyData; // 0x20
		::GPOCDKHHGFG* _propertyAllocateHelper; // 0x28

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* uiController, ::UnityEngine::Vector3 worldSpacePos, ::MKFANIOOGFA_HGOHPMBOAIC* iconKeyData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*, ::UnityEngine::Vector3, ::MKFANIOOGFA_HGOHPMBOAIC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE__CTOR_OFFSET))(this, uiController, worldSpacePos, iconKeyData);
		}

		::MKFANIOOGFA_PKPGICNJDHK* get_SubMapData()
		{
			return ((::MKFANIOOGFA_PKPGICNJDHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_SUBMAPDATA_OFFSET))(this);
		}

		::JIOLFCAGOFH_1<::System::Single>* get_MapSizeCurrent()
		{
			return ((::JIOLFCAGOFH_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_MAPSIZECURRENT_OFFSET))(this);
		}

		::JIOLFCAGOFH_1<::UnityEngine::Vector3>* get_WorldSpacePos()
		{
			return ((::JIOLFCAGOFH_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_WORLDSPACEPOS_OFFSET))(this);
		}

		::JIOLFCAGOFH_1<::UnityEngine::Quaternion>* get_WorldSpaceRotation()
		{
			return ((::JIOLFCAGOFH_1<::UnityEngine::Quaternion>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_WORLDSPACEROTATION_OFFSET))(this);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_CanRotation()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONMODEL_SIMPLE_GET_CANROTATION_OFFSET))(this);
		}
	};
}
