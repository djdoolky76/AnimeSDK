#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/TextItalicAdobeStyle.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UITextPopRuntime; }

#define POPTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1374C2F0)
#define POPTEXT_ENSURERUNTIME_OFFSET UNITYSDK_OFFSET(0x1374C140)
#define POPTEXT_EXECUTEPOSTREBUILD_OFFSET UNITYSDK_OFFSET(0x1374C500)
#define POPTEXT_GET_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1374C4F0)
#define POPTEXT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1374C030)
#define POPTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1374C3D0)
#define POPTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1374C360)
#define POPTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1374C470)
#define POPTEXT_REPLAY_OFFSET UNITYSDK_OFFSET(0x1374C740)
#define POPTEXT_RESOLVESPEED_OFFSET UNITYSDK_OFFSET(0x1374C1F0)
#define POPTEXT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1374C290)
#define POPTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1374C0A0)
#define POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPACTIVEANDENABLED_OFFSET UNITYSDK_OFFSET(0x1374C600)
#define POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPCURVE_OFFSET UNITYSDK_OFFSET(0x1374C5B0)
#define POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPSPEED_OFFSET UNITYSDK_OFFSET(0x1374C560)
#define POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_ONPOPPLAYBACKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1374C6E0)
#define POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_REQUESTPOPVISUALREFRESH_OFFSET UNITYSDK_OFFSET(0x1374C650)
#define POPTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1374C780)
#define POPTEXT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1374C7E0)
#define POPTEXT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1374C7F0)
#define POPTEXT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1374C800)
#define POPTEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1374C810)

inline static constexpr unsigned int PopText_TypeDefinitionIndex = 67157;

class PopText : public ::UnityEngine::UI::TextItalicAdobeStyle
{
public:
	::System::Boolean PlayAwake; // 0x3C8
	::System::Byte _padding0[0x3];
	::System::Single Speed; // 0x3CC
	::System::Action* finishAction; // 0x3D0
	::UnityEngine::AnimationCurve* Curve; // 0x3D8
	::UnityEngine::UI::Extension::UITextPopRuntime* _runtime; // 0x3E0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void SetText(::System::String* str, ::System::String* realText)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + POPTEXT_SETTEXT_OFFSET))(this, str, realText);
	}

	::System::Void ResolveSpeed(::System::Single wordPerSecond, ::System::Int32 wordCount)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + POPTEXT_RESOLVESPEED_OFFSET))(this, wordPerSecond, wordCount);
	}

	::System::Void SetFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_SETFINISH_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPTEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
	}

	::System::Boolean get_CanExecute()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_GET_CANEXECUTE_OFFSET))(this);
	}

	::System::Void ExecutePostRebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_EXECUTEPOSTREBUILD_OFFSET))(this);
	}

	::System::Single UnityEngine_UI_Extension_IUITextPopRuntimeHost_get_PopSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPSPEED_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* UnityEngine_UI_Extension_IUITextPopRuntimeHost_get_PopCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPCURVE_OFFSET))(this);
	}

	::System::Boolean UnityEngine_UI_Extension_IUITextPopRuntimeHost_get_PopActiveAndEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPACTIVEANDENABLED_OFFSET))(this);
	}

	::System::Void UnityEngine_UI_Extension_IUITextPopRuntimeHost_RequestPopVisualRefresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_REQUESTPOPVISUALREFRESH_OFFSET))(this);
	}

	::System::Void UnityEngine_UI_Extension_IUITextPopRuntimeHost_OnPopPlaybackCompleted()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_ONPOPPLAYBACKCOMPLETED_OFFSET))(this);
	}

	::System::Void EnsureRuntime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_ENSURERUNTIME_OFFSET))(this);
	}

	::System::Void Replay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT_REPLAY_OFFSET))(this);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT___BASE_AWAKE_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPTEXT___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPTEXT___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
	}
};
