#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FILNFMCNCFE;
class GCIMMDDIFBJ;
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x147D3DD0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_CONTENTLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x147D3F30)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x147D3D20)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0x147D3FE0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0x147D3E80)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x147D4090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MiniMapView_TypeDefinitionIndex = 90446;

	class UIMiniScapeMapPage_MapWidgetController_MiniMapView : public ::System::Object
	{
	public:
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW__CTOR_OFFSET))(this, uiController);
		}

		::FILNFMCNCFE* get_Image()
		{
			return ((::FILNFMCNCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_IMAGE_OFFSET))(this);
		}

		::GCIMMDDIFBJ* get_Animation()
		{
			return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_ANIMATION_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UISlider* get_Slider()
		{
			return ((::UnityEngine::UI::Extension::UISlider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SLIDER_OFFSET))(this);
		}

		::UnityEngine::UI::LayoutElement* get_ContentLayoutElement()
		{
			return ((::UnityEngine::UI::LayoutElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_CONTENTLAYOUTELEMENT_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPVIEW_GET_SCROLLRECT_OFFSET))(this);
		}
	};
}
