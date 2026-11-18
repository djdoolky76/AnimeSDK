#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_BUILD_OFFSET UNITYSDK_OFFSET(0x1BA13B50)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ENSUREINDEXCAPACITY_OFFSET UNITYSDK_OFFSET(0x1BA14020)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ENSURE_OFFSET UNITYSDK_OFFSET(0x1BA13AB0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x1BA13A90)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_GET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA13A70)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ISSUPPORTEDTAGNAME_OFFSET UNITYSDK_OFFSET(0x1BA14580)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ISWHITESPACETEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1BA14500)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_SETINDEXRANGE_OFFSET UNITYSDK_OFFSET(0x1BA143D0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_SET_REVISION_OFFSET UNITYSDK_OFFSET(0x1BA13AA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_SET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA13A80)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_TRYGETSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1BA13EF0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_TRYGETVISIBLESTEPINDEX_OFFSET UNITYSDK_OFFSET(0x1BA13FA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_TRYREADSUPPORTEDRICHTEXTTAG_OFFSET UNITYSDK_OFFSET(0x1BA140E0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA147B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA14720)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTypewriterStepMap_TypeDefinitionIndex = 45231;

	class UITextTypewriterStepMap : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_EmptyIndexMap()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITextTypewriterStepMap_TypeDefinitionIndex)->GetStaticField(0x4F150);
		}
		::Il2CppArray<::System::Int32>* _textIndexToStepIndex; // 0x10
		::System::String* _sourceText; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _visibleStepIndices; // 0x20
		::System::Boolean _supportRichText; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _StepCount_k__BackingField; // 0x2C
		::System::Int32 _Revision_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP__CCTOR_OFFSET))();
		}

		::System::Int32 get_StepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_GET_STEPCOUNT_OFFSET))(this);
		}

		::System::Void set_StepCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_SET_STEPCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_Revision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_GET_REVISION_OFFSET))(this);
		}

		::System::Void set_Revision(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_SET_REVISION_OFFSET))(this, value);
		}

		::System::Void Ensure(::System::String* text, ::System::Boolean supportRichText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ENSURE_OFFSET))(this, text, supportRichText);
		}

		::System::Boolean TryGetStepIndex(::System::Int32 textIndex, ::System::Int32& stepIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_TRYGETSTEPINDEX_OFFSET))(this, textIndex, stepIndex);
		}

		::System::Boolean TryGetVisibleStepIndex(::System::Int32 visibleIndex, ::System::Int32& stepIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_TRYGETVISIBLESTEPINDEX_OFFSET))(this, visibleIndex, stepIndex);
		}

		::System::Void Build(::System::String* text, ::System::Boolean supportRichText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_BUILD_OFFSET))(this, text, supportRichText);
		}

		::System::Void EnsureIndexCapacity(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ENSUREINDEXCAPACITY_OFFSET))(this, length);
		}

		::System::Void SetIndexRange(::System::Int32 start, ::System::Int32 length, ::System::Int32 stepIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_SETINDEXRANGE_OFFSET))(this, start, length, stepIndex);
		}

		static ::System::Boolean IsWhitespaceTextElement(::System::String* element)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ISWHITESPACETEXTELEMENT_OFFSET))(element);
		}

		static ::System::Boolean TryReadSupportedRichTextTag(::System::String* text, ::System::Int32 start, ::System::Int32& tagEnd, ::System::Boolean& isQuad)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_TRYREADSUPPORTEDRICHTEXTTAG_OFFSET))(text, start, tagEnd, isQuad);
		}

		static ::System::Boolean IsSupportedTagName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERSTEPMAP_ISSUPPORTEDTAGNAME_OFFSET))(name);
		}
	};
}
