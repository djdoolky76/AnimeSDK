#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InlineEditorModes.h"
#include "unitysdk/Sirenix/OdinInspector/InlineEditorObjectFieldModes.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET UNITYSDK_OFFSET(0x1FB80B50)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1FB80B30)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDEDHASVALUE_OFFSET UNITYSDK_OFFSET(0x1FB80B60)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1FB80B40)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB80C40)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB80B70)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InlineEditorAttribute_TypeDefinitionIndex = 7332;

	class InlineEditorAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean HideObjectField; // 0x10
		::System::Boolean IncrementInlineEditorDrawerDepth; // 0x11
		::System::Boolean DrawGUI; // 0x12
		::System::Boolean DisableGUIForVCSLockedAssets; // 0x13
		::System::Single PreviewHeight; // 0x14
		::System::Single MaxHeight; // 0x18
		::System::Single PreviewWidth; // 0x1C
		::System::Boolean expanded; // 0x20
		::System::Boolean _ExpandedHasValue_k__BackingField; // 0x21
		::System::Boolean DrawHeader; // 0x22
		::System::Boolean DrawPreview; // 0x23
		::Sirenix::OdinInspector::InlineEditorObjectFieldModes ObjectFieldMode; // 0x24

		::System::Void _ctor(::Sirenix::OdinInspector::InlineEditorModes inlineEditorMode, ::Sirenix::OdinInspector::InlineEditorObjectFieldModes objectFieldMode)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::InlineEditorModes, ::Sirenix::OdinInspector::InlineEditorObjectFieldModes))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_OFFSET))(this, inlineEditorMode, objectFieldMode);
		}

		::System::Void _ctor_1(::Sirenix::OdinInspector::InlineEditorObjectFieldModes objectFieldMode)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::InlineEditorObjectFieldModes))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_1_OFFSET))(this, objectFieldMode);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDED_OFFSET))(this);
		}

		::System::Void set_Expanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDED_OFFSET))(this, value);
		}

		::System::Boolean get_ExpandedHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET))(this);
		}

		::System::Void set_ExpandedHasValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDEDHASVALUE_OFFSET))(this, value);
		}
	};
}
