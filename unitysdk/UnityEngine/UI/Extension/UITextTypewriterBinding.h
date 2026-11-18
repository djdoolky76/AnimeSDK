#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTypewriterObjectTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_ADDOBJECTTARGET_OFFSET UNITYSDK_OFFSET(0x194D4450)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_BEGINFRAME_OFFSET UNITYSDK_OFFSET(0x194D4240)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_CLEAR_OFFSET UNITYSDK_OFFSET(0x194D4610)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_GET_OBJECTTARGETS_OFFSET UNITYSDK_OFFSET(0x194D4230)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_GET_QUADSTEPINDICES_OFFSET UNITYSDK_OFFSET(0x194D4220)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_GET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x194D4200)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_SETQUADSTEPINDEX_OFFSET UNITYSDK_OFFSET(0x194D3130)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_SETQUADSTEPRANGE_OFFSET UNITYSDK_OFFSET(0x194D4380)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_SET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x194D4210)
#define UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x194D46B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTypewriterBinding_TypeDefinitionIndex = 90055;

	class UITextTypewriterBinding : public ::System::Object
	{
	public:
		// static const ::System::Int32 UnboundStepIndex = -0x1; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextTypewriterObjectTarget>* _objectTargets; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _quadStepIndices; // 0x18
		::System::Int32 _StepCount_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_GET_STEPCOUNT_OFFSET))(this);
		}

		::System::Void set_StepCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_SET_STEPCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_QuadStepIndices()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_GET_QUADSTEPINDICES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextTypewriterObjectTarget>* get_ObjectTargets()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextTypewriterObjectTarget>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_GET_OBJECTTARGETS_OFFSET))(this);
		}

		::System::Void BeginFrame(::System::Int32 stepCount, ::System::Int32 finalQuadCount, ::System::Boolean rebuildQuadMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_BEGINFRAME_OFFSET))(this, stepCount, finalQuadCount, rebuildQuadMap);
		}

		::System::Void SetQuadStepIndex(::System::Int32 quadIndex, ::System::Int32 stepIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_SETQUADSTEPINDEX_OFFSET))(this, quadIndex, stepIndex);
		}

		::System::Void SetQuadStepRange(::System::Int32 quadStart, ::System::Int32 quadCount, ::System::Int32 stepIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_SETQUADSTEPRANGE_OFFSET))(this, quadStart, quadCount, stepIndex);
		}

		::System::Void AddObjectTarget(::UnityEngine::RectTransform* target, ::System::Int32 stepIndex, ::UnityEngine::Vector3 visibleScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_ADDOBJECTTARGET_OFFSET))(this, target, stepIndex, visibleScale);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTYPEWRITERBINDING_CLEAR_OFFSET))(this);
		}
	};
}
