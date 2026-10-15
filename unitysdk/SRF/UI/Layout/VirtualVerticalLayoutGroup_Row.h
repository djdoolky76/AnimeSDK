#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SRF::UI { class StyleRoot; }
namespace SRF::UI::Layout { class IVirtualView; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED80140)

namespace SRF::UI::Layout
{
	class VirtualVerticalLayoutGroup_Row : public ::System::Object
	{
	public:
		::System::Object* Data; // 0x10
		::System::Int32 Index; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::RectTransform* Rect; // 0x20
		::SRF::UI::StyleRoot* Root; // 0x28
		::SRF::UI::Layout::IVirtualView* View; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ROW_CTOR_OFFSET))(this);
		}

	};
}
