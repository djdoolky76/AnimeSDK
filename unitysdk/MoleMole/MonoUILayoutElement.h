#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_MONOUILAYOUTELEMENT_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A936460)
#define MOLEMOLE_MONOUILAYOUTELEMENT_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1A936480)
#define MOLEMOLE_MONOUILAYOUTELEMENT_REINITFROMLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A936150)
#define MOLEMOLE_MONOUILAYOUTELEMENT_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A936470)
#define MOLEMOLE_MONOUILAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A936140)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUILayoutElement_TypeDefinitionIndex = 77291;

	class MonoUILayoutElement : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* layoutElement; // 0x10
		::System::Int32 layoutPriority; // 0x18
		::System::Single flexibleHeight; // 0x1C
		::System::Single minHeight; // 0x20
		::System::Single flexibleWidth; // 0x24
		::System::Single preferredHeight; // 0x28
		::System::Boolean isPreFerredHeight; // 0x2C
		::System::Boolean isMinHeight; // 0x2D
		::System::Boolean isFlexibleHeight; // 0x2E
		::System::Boolean isPreferredWidth; // 0x2F
		::System::Single minWidth; // 0x30
		::System::Single preferredWidth; // 0x34
		::System::Boolean isFlexibleWidth; // 0x38
		::System::Boolean _valueChanged_k__BackingField; // 0x39
		::System::Boolean ignoreLayout; // 0x3A
		::System::Boolean isMinWidth; // 0x3B

		::System::Void _ctor(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT__CTOR_OFFSET))(this, layoutElement);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromLayoutElement(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_REINITFROMLAYOUTELEMENT_OFFSET))(this, layoutElement);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUILAYOUTELEMENT_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
