#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_GRAPHICREGISTRY_CANVASGRAPHICSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FECD0)

namespace UnityEngine::UI
{
	class GraphicRegistry_CanvasGraphicsData : public ::System::Object
	{
	public:
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>* Graphics; // 0x10
		::System::Action* ChangeCallback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_CANVASGRAPHICSDATA_CTOR_OFFSET))(this);
		}

	};
}
