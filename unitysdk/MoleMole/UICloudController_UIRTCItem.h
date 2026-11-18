#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMFBNFKFBBG.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICLOUDCONTROLLER_UIRTCITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18D43EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICloudController_UIRTCItem_TypeDefinitionIndex = 43085;

	class UICloudController_UIRTCItem : public ::System::Object
	{
	public:
		::FMFBNFKFBBG UITypeID; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* BindUIRects; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* ControlCanvasGroups; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICLOUDCONTROLLER_UIRTCITEM__CTOR_OFFSET))(this);
		}
	};
}
