#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UITextTypewriterBinding; }
namespace UnityEngine::UI::Extension { class UITextTypewriterStepMap; }

#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_ACQUIRETYPEWRITERCONSUMER_OFFSET UNITYSDK_OFFSET(0x194D2C20)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_BUILDTYPEWRITERBINDING_OFFSET UNITYSDK_OFFSET(0x194D2CA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_GETTYPEWRITERTOPOLOGYKEY_OFFSET UNITYSDK_OFFSET(0x194D2BD0)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_GET_TYPEWRITERSTEPREVISION_OFFSET UNITYSDK_OFFSET(0x194D2850)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_ISVISIBLEQUAD_OFFSET UNITYSDK_OFFSET(0x194D2F00)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_PREPARETYPEWRITERSTEPS_OFFSET UNITYSDK_OFFSET(0x194D2870)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_RELEASETYPEWRITERCONSUMER_OFFSET UNITYSDK_OFFSET(0x194D2C60)
#define UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x194D2780)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextPlainTypewriterSource_TypeDefinitionIndex = 68565;

	class UITextPlainTypewriterSource : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* _text; // 0x10
		::UnityEngine::UI::Extension::UITextTypewriterStepMap* _stepMap; // 0x18

		::System::Void _ctor(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE__CTOR_OFFSET))(this, text);
		}

		::System::Int32 get_TypewriterStepRevision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_GET_TYPEWRITERSTEPREVISION_OFFSET))(this);
		}

		::System::Int32 PrepareTypewriterSteps()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_PREPARETYPEWRITERSTEPS_OFFSET))(this);
		}

		::System::Int32 GetTypewriterTopologyKey(::UnityEngine::UI::VertexHelper* vertexHelper)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_GETTYPEWRITERTOPOLOGYKEY_OFFSET))(this, vertexHelper);
		}

		::System::Void AcquireTypewriterConsumer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_ACQUIRETYPEWRITERCONSUMER_OFFSET))(this);
		}

		::System::Void ReleaseTypewriterConsumer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_RELEASETYPEWRITERCONSUMER_OFFSET))(this);
		}

		::System::Void BuildTypewriterBinding(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::UI::Extension::UITextTypewriterBinding* binding, ::System::Boolean rebuildQuadMap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::UI::Extension::UITextTypewriterBinding*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_BUILDTYPEWRITERBINDING_OFFSET))(this, vertexHelper, binding, rebuildQuadMap);
		}

		static ::System::Boolean IsVisibleQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::System::Int32 quadIndex)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::VertexHelper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLAINTYPEWRITERSOURCE_ISVISIBLEQUAD_OFFSET))(vertexHelper, quadIndex);
		}
	};
}
