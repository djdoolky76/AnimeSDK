#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPOCDKHHGFG;
class KOGPMKOGCLC;
class ODNBJIEICJH;
class PONBOHIGCJP_CNBLLJPHHGB;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class JIOLFCAGOFH_1;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_CURTIMETOPOINTERPOS_OFFSET UNITYSDK_OFFSET(0x180874D0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x18086B70)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_ONPOINTERPOSDRAG_OFFSET UNITYSDK_OFFSET(0x180876C0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_POINTERPOSTOCURTIME_OFFSET UNITYSDK_OFFSET(0x18087A50)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATEPOINTERPOS_OFFSET UNITYSDK_OFFSET(0x180872A0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18087240)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x180869B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_MusicPointerHelper_TypeDefinitionIndex = 73739;

	class UIFashionStorePreviewPanelWidgetController_MusicPointerHelper : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Single>* _scrollViewStartTime; // 0x10
		::PONBOHIGCJP_CNBLLJPHHGB* _fashionStoreData; // 0x18
		::UnityEngine::RectTransform* _pointerRoot; // 0x20
		::GPOCDKHHGFG* _propertyAllocateHelper; // 0x28
		::IHECGHKOIPM_1<::System::Single>* _timePerItem; // 0x30
		::IHECGHKOIPM_1<::System::Single>* _sizePerItem; // 0x38
		::ODNBJIEICJH* _propertySyncHelper; // 0x40
		::System::Boolean _pointerPosDirty; // 0x48

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::UnityEngine::RectTransform* pointerRoot, ::PONBOHIGCJP_CNBLLJPHHGB* fashionStoreData, ::JIOLFCAGOFH_1<::System::Single>* sizePerItem, ::JIOLFCAGOFH_1<::System::Single>* timePerItem, ::JIOLFCAGOFH_1<::System::Single>* scrollViewStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::PONBOHIGCJP_CNBLLJPHHGB*, ::JIOLFCAGOFH_1<::System::Single>*, ::JIOLFCAGOFH_1<::System::Single>*, ::JIOLFCAGOFH_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_INIT_OFFSET))(this, pointerRoot, fashionStoreData, sizePerItem, timePerItem, scrollViewStartTime);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATE_OFFSET))(this);
		}

		::System::Boolean UpdatePointerPos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATEPOINTERPOS_OFFSET))(this);
		}

		::System::Void OnPointerPosDrag(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_ONPOINTERPOSDRAG_OFFSET))(this, eventData);
		}

		::System::Single CurTimeToPointerPos(::System::Single curTime, ::System::Single scrollViewStartTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_CURTIMETOPOINTERPOS_OFFSET))(this, curTime, scrollViewStartTime);
		}

		::System::Single PointerPosToCurTime(::System::Single pointerPosX, ::System::Single scrollViewStartTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_POINTERPOSTOCURTIME_OFFSET))(this, pointerPosX, scrollViewStartTime);
		}
	};
}
