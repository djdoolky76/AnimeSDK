#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class LinkFeature; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C2E8170)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_CACHEEVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1C2E83F0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_CLEARHOVEREDLINK_OFFSET UNITYSDK_OFFSET(0x1C2E93C0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GETEVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1C2E8F20)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GET_LINKFEATUREREF_OFFSET UNITYSDK_OFFSET(0x1C2E7FF0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C2E7FE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ISPOINTERINTERACTIONENABLED_OFFSET UNITYSDK_OFFSET(0x1C2E8960)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2E8680)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2E8240)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1C2E8B20)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1C2E8830)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1C2E9480)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0x1C2E9090)
#define UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E94D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextLinkHandler_TypeDefinitionIndex = 79006;

	class UITextLinkHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* _text; // 0x18
		::UnityEngine::Camera* _eventCamera; // 0x20
		::System::Boolean _didForceRaycast; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* _hoveredLinkId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_Text()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GET_TEXT_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::LinkFeature* get_LinkFeatureRef()
		{
			return ((::UnityEngine::UI::Extension::LinkFeature*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GET_LINKFEATUREREF_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTERMOVE_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::UnityEngine::Camera* GetEventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_GETEVENTCAMERA_OFFSET))(this);
		}

		::System::Void CacheEventCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_CACHEEVENTCAMERA_OFFSET))(this);
		}

		::System::Boolean IsPointerInteractionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_ISPOINTERINTERACTIONENABLED_OFFSET))(this);
		}

		::System::Void ClearHoveredLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTLINKHANDLER_CLEARHOVEREDLINK_OFFSET))(this);
		}
	};
}
