#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class UITextPopRuntime; }

#define POPEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C2C96D0)
#define POPEFFECT_ENSURERUNTIME_OFFSET UNITYSDK_OFFSET(0x1C2C9270)
#define POPEFFECT_EXECUTEPOSTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C2C9910)
#define POPEFFECT_GET_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C2C9900)
#define POPEFFECT_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1C2C9140)
#define POPEFFECT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1C2C9890)
#define POPEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2C97F0)
#define POPEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2C9790)
#define POPEFFECT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1C2C9480)
#define POPEFFECT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1C2C9670)
#define POPEFFECT_SETTEXTWITHOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x1C2C93E0)
#define POPEFFECT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1C2C91B0)
#define POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPACTIVEANDENABLED_OFFSET UNITYSDK_OFFSET(0x1C2C99F0)
#define POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPCURVE_OFFSET UNITYSDK_OFFSET(0x1C2C99B0)
#define POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPSPEED_OFFSET UNITYSDK_OFFSET(0x1C2C9960)
#define POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_ONPOPPLAYBACKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C2C9A90)
#define POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_REQUESTPOPVISUALREFRESH_OFFSET UNITYSDK_OFFSET(0x1C2C9A40)
#define POPEFFECT_UPDATEIMGSIZE_OFFSET UNITYSDK_OFFSET(0x1C2C9620)
#define POPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9AF0)
#define POPEFFECT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C2C9BA0)
#define POPEFFECT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2C9C30)
#define POPEFFECT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2C9C40)

inline static constexpr unsigned int PopEffect_TypeDefinitionIndex = 82320;

class PopEffect : public ::UnityEngine::UI::BaseMeshEffect
{
public:
	::System::Boolean PlayAwake; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single Speed; // 0x24
	::UnityEngine::AnimationCurve* Curve; // 0x28
	::UnityEngine::UI::Text* _text; // 0x30
	::System::Action* _callback; // 0x38
	::UnityEngine::UI::Extension::UITextPopRuntime* _runtime; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void SetText(::System::String* str, ::System::Action* callback, ::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + POPEFFECT_SETTEXT_OFFSET))(this, str, callback, time);
	}

	::System::Void SetTextWithOutAnimation(::System::String* str, ::System::Action* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + POPEFFECT_SETTEXTWITHOUTANIMATION_OFFSET))(this, str, callback);
	}

	::System::Void SetDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_SETDIRTY_OFFSET))(this);
	}

	::System::Void UpdateImgSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UPDATEIMGSIZE_OFFSET))(this);
	}

	::System::Void SetFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_SETFINISH_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_ONDISABLE_OFFSET))(this);
	}

	::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vertexHelper)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + POPEFFECT_MODIFYMESH_OFFSET))(this, vertexHelper);
	}

	::System::Boolean get_CanExecute()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_GET_CANEXECUTE_OFFSET))(this);
	}

	::System::Void ExecutePostRebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_EXECUTEPOSTREBUILD_OFFSET))(this);
	}

	::System::Single UnityEngine_UI_Extension_IUITextPopRuntimeHost_get_PopSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPSPEED_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* UnityEngine_UI_Extension_IUITextPopRuntimeHost_get_PopCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPCURVE_OFFSET))(this);
	}

	::System::Boolean UnityEngine_UI_Extension_IUITextPopRuntimeHost_get_PopActiveAndEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_GET_POPACTIVEANDENABLED_OFFSET))(this);
	}

	::System::Void UnityEngine_UI_Extension_IUITextPopRuntimeHost_RequestPopVisualRefresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_REQUESTPOPVISUALREFRESH_OFFSET))(this);
	}

	::System::Void UnityEngine_UI_Extension_IUITextPopRuntimeHost_OnPopPlaybackCompleted()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_UNITYENGINE_UI_EXTENSION_IUITEXTPOPRUNTIMEHOST_ONPOPPLAYBACKCOMPLETED_OFFSET))(this);
	}

	::System::Void EnsureRuntime()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT_ENSURERUNTIME_OFFSET))(this);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT___BASE_AWAKE_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPEFFECT___BASE_ONENABLE_OFFSET))(this);
	}
};
