#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GEIHCPAOKKK;
class PIJCCFAADKK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISVIEWREADY_OFFSET UNITYSDK_OFFSET(0x14BCAD30)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISWIDGETACTIVE_OFFSET UNITYSDK_OFFSET(0x14BCACC0)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x14BCAA60)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAJORAXISLENGTH_OFFSET UNITYSDK_OFFSET(0x14BCAC00)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MINORAXISLENGTH_OFFSET UNITYSDK_OFFSET(0x14BCAC60)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0x14BCAA70)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14BCAA50)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14BCB830)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_SETENTITY_OFFSET UNITYSDK_OFFSET(0x14BCAD40)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_UPDATEWIDGET_OFFSET UNITYSDK_OFFSET(0x14BCB050)
#define MOLEMOLE_TELEPORTSELECTIONWIDGETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BCB880)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportSelectionWidgetBase_TypeDefinitionIndex = 76769;

	class TeleportSelectionWidgetBase : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* CGNCOCBCAJG; // 0x0
		::MoleMole::Battle::Entity* _teleportEntity; // 0x320
		::PIJCCFAADKK* _teleportComponent; // 0x328
		::GEIHCPAOKKK* _teleportModelComponent; // 0x330
		::MoleMole::Config::ConfigTeleportSelection3C* _config3C; // 0x338
		::UnityEngine::Camera* LIINIMMHOPM; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Camera* get_mainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAINCAMERA_OFFSET))(this);
		}

		::UnityEngine::Camera* get_uiCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_UICAMERA_OFFSET))(this);
		}

		::System::Single get_MajorAxisLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MAJORAXISLENGTH_OFFSET))(this);
		}

		::System::Single get_MinorAxisLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_MINORAXISLENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsWidgetActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISWIDGETACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsViewReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_GET_ISVIEWREADY_OFFSET))(this);
		}

		::System::Void SetEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_SETENTITY_OFFSET))(this, entity);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTSELECTIONWIDGETBASE_UPDATEWIDGET_OFFSET))(this);
		}
	};
}
