#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UITextTypewriterBinding; }
namespace UnityEngine::UI::Extension { class UITextTypewriterPlayer; }

#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_APPLYMESH_OFFSET UNITYSDK_OFFSET(0x194D31E0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_APPLYOBJECTS_OFFSET UNITYSDK_OFFSET(0x194D3C80)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x194D3C00)
#define UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_RESTOREOBJECTS_OFFSET UNITYSDK_OFFSET(0x194D4000)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextPopRenderer_TypeDefinitionIndex = 77083;

	class UITextPopRenderer : public ::System::Object
	{
	public:
		static ::System::Void ApplyMesh(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::UI::Extension::UITextTypewriterBinding* binding, ::UnityEngine::UI::Extension::UITextTypewriterPlayer* player, ::UnityEngine::AnimationCurve* curve, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* source, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* output)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::UI::Extension::UITextTypewriterBinding*, ::UnityEngine::UI::Extension::UITextTypewriterPlayer*, ::UnityEngine::AnimationCurve*, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_APPLYMESH_OFFSET))(vertexHelper, binding, player, curve, source, output);
		}

		static ::System::Void ApplyObjects(::UnityEngine::UI::Extension::UITextTypewriterBinding* binding, ::UnityEngine::UI::Extension::UITextTypewriterPlayer* player, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UITextTypewriterBinding*, ::UnityEngine::UI::Extension::UITextTypewriterPlayer*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_APPLYOBJECTS_OFFSET))(binding, player, curve);
		}

		static ::System::Void RestoreObjects(::UnityEngine::UI::Extension::UITextTypewriterBinding* binding)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UITextTypewriterBinding*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_RESTOREOBJECTS_OFFSET))(binding);
		}

		static ::System::Single Evaluate(::System::Single progress, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPOPRENDERER_EVALUATE_OFFSET))(progress, curve);
		}
	};
}
