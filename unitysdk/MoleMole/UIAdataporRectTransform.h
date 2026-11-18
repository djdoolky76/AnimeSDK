#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DBNIJMKJBOH.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_1_OFFSET UNITYSDK_OFFSET(0x1963F1B0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x1963F0D0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYSCALEFROM_OFFSET UNITYSDK_OFFSET(0x1963F2A0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1963F0B0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1963F300)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1963ED90)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1963F0C0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1963ED80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_TypeDefinitionIndex = 75608;

	class UIAdataporRectTransform : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 anchorMin; // 0x10
		::UnityEngine::Vector2 pivot; // 0x18
		::UnityEngine::Quaternion localRotation; // 0x20
		::UnityEngine::Quaternion rotation; // 0x30
		::UnityEngine::Vector2 anchoredPosition; // 0x40
		::UnityEngine::Vector2 anchorMax; // 0x48
		::UnityEngine::Vector3 localScale; // 0x50
		::UnityEngine::Vector2 offsetMax; // 0x5C
		::UnityEngine::Vector2 offsetMin; // 0x64
		::System::Boolean CloseRotationControl; // 0x6C
		::System::Boolean _valueChanged_k__BackingField; // 0x6D
		::System::Boolean CloseScaleControl; // 0x6E
		::System::Boolean ClosePositionControl; // 0x6F

		::System::Void _ctor(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM__CTOR_OFFSET))(this, rectTransform);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromRectTransform(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_REINITFROMRECTTRANSFORM_OFFSET))(this, rectTransform);
		}

		::System::Void CopyPositionFrom(::MoleMole::UIAdataporRectTransform* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_OFFSET))(this, other);
		}

		::System::Void CopyPositionFrom_1(::DBNIJMKJBOH other)
		{
			return ((::System::Void(*)(::PVOID, ::DBNIJMKJBOH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYPOSITIONFROM_1_OFFSET))(this, other);
		}

		::System::Void CopyScaleFrom(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_COPYSCALEFROM_OFFSET))(this, scale);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}
