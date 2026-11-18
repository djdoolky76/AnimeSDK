#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_CLAMPPARAMS_OFFSET UNITYSDK_OFFSET(0x1F1C9820)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_DESTROYPROCESSMATINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F1C8F00)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ENSURERESULTRT_OFFSET UNITYSDK_OFFSET(0x1F1C89B0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GENERATERESULT_OFFSET UNITYSDK_OFFSET(0x1F1C7BE0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GETPROCESSMATINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F1C8310)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GETPROCESSMAT_OFFSET UNITYSDK_OFFSET(0x1F1C8D40)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GETSOURCETEXTURE_OFFSET UNITYSDK_OFFSET(0x1F1C7A60)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F1C7080)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GET_RESULTRT_OFFSET UNITYSDK_OFFSET(0x1F1C7070)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C9570)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1C9890)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F1C9710)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F1C9400)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F1C9190)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F1C7260)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_RELEASEFORINACTIVE_OFFSET UNITYSDK_OFFSET(0x1F1C9520)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_RELEASERESULT_OFFSET UNITYSDK_OFFSET(0x1F1C8700)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1C9A40)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C99A0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F1C9AA0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F1C9AB0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F1C9AC0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F1C9AD0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F1C9AE0)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1F1C9B80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImageMipBlur_TypeDefinitionIndex = 89091;

	class UIImageMipBlur : public ::UnityEngine::UI::Image
	{
	public:
		static ::System::Int32* StaticGet_BlurAmountProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlur_TypeDefinitionIndex)->GetStaticField(0xF570);
		}
		static ::System::Int32* StaticGet_TexelSizeProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlur_TypeDefinitionIndex)->GetStaticField(0xF574);
		}
		static ::System::Int32* StaticGet_SrcRectProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlur_TypeDefinitionIndex)->GetStaticField(0xF578);
		}
		// static const ::System::String* UIImageMipBlurMatPath; // 0x0
		::System::Int32 m_Downsample; // 0x140
		::System::Single m_BlurAmount; // 0x144
		::UnityEngine::Material* m_ProcessMat; // 0x148
		::UnityEngine::Material* m_ProcessMatInstance; // 0x150
		::UnityEngine::Material* m_ProcessMatInstanceSource; // 0x158
		::System::Boolean _isLoadedProcessMat; // 0x160
		::System::Byte _padding0[0x7];
		::Foundation::AssetRequestHandle _processMatHandle; // 0x168
		::UnityEngine::RenderTexture* m_ResultRT; // 0x188
		::UnityEngine::Texture* m_SourceTexture; // 0x190
		::UnityEngine::Sprite* m_SourceSprite; // 0x198
		::UnityEngine::Sprite* m_RTSprite; // 0x1A0
		::System::Int32 m_LastDownsample; // 0x1A8
		::System::Single m_LastBlurAmount; // 0x1AC
		::System::Boolean m_Dirty; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* get_resultRT()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GET_RESULTRT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::UnityEngine::Texture* GetSourceTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GETSOURCETEXTURE_OFFSET))(this);
		}

		::System::Void GenerateResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GENERATERESULT_OFFSET))(this);
		}

		::System::Void EnsureResultRT(::System::Int32 w, ::System::Int32 h)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ENSURERESULTRT_OFFSET))(this, w, h);
		}

		::System::Void ReleaseResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_RELEASERESULT_OFFSET))(this);
		}

		::UnityEngine::Material* GetProcessMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GETPROCESSMAT_OFFSET))(this);
		}

		::UnityEngine::Material* GetProcessMatInstance()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_GETPROCESSMATINSTANCE_OFFSET))(this);
		}

		::System::Void DestroyProcessMatInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_DESTROYPROCESSMATINSTANCE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONDISABLE_OFFSET))(this);
		}

		::System::Void ReleaseForInactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_RELEASEFORINACTIVE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void ClampParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_CLAMPPARAMS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLUR___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}
	};
}
