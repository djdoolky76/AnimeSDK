#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_FLUSHPARAMS_OFFSET UNITYSDK_OFFSET(0x1E8F5090)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_BACKLIGHT_OFFSET UNITYSDK_OFFSET(0x1E8F4C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_DESATURATE_OFFSET UNITYSDK_OFFSET(0x1E8F4CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_OUTLINE_OFFSET UNITYSDK_OFFSET(0x1E8F4C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS__FX_DESATURATE_MASK_OFFSET UNITYSDK_OFFSET(0x1E8F4D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__DESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x1E8F4DD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXBACKLIGHTTEX_OFFSET UNITYSDK_OFFSET(0x1E8F4E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXOVERRIDETEX_OFFSET UNITYSDK_OFFSET(0x1E8F4F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__MAINTEX_OFFSET UNITYSDK_OFFSET(0x1E8F4FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_BACKLIGHT_OFFSET UNITYSDK_OFFSET(0x1E8F4C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_DESATURATE_OFFSET UNITYSDK_OFFSET(0x1E8F4D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_OUTLINE_OFFSET UNITYSDK_OFFSET(0x1E8F4C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS__FX_DESATURATE_MASK_OFFSET UNITYSDK_OFFSET(0x1E8F4D70)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__DESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x1E8F4DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXBACKLIGHTTEX_OFFSET UNITYSDK_OFFSET(0x1E8F4E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXOVERRIDETEX_OFFSET UNITYSDK_OFFSET(0x1E8F4F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__MAINTEX_OFFSET UNITYSDK_OFFSET(0x1E8F4FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F5B10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int TextureSheetRenderer_FXParams_TypeDefinitionIndex = 27032;

	class TextureSheetRenderer_FXParams : public ::System::Object
	{
	public:
		// static const ::System::String* S_FX_BACKLIGHT; // 0x0
		// static const ::System::String* S_FX_OUTLINE; // 0x0
		// static const ::System::String* S_FX_DESATURATE; // 0x0
		// static const ::System::String* S_FX_DESATURATE_MASK; // 0x0
		::UnityEngine::Texture* fxBackLightTex; // 0x10
		::UnityEngine::Texture* fxOverrideTex; // 0x18
		::Il2CppArray<::UnityEngine::Vector4>* _LocalVectorArrayParams; // 0x20
		::UnityEngine::Texture* mainTex; // 0x28
		::UnityEngine::Texture* desaturateMask; // 0x30
		::UnityEngine::Vector4 _FxOverrideTexUVSpeed; // 0x38
		::UnityEngine::Vector4 _FxBackLightTexUVSpeed; // 0x48
		::UnityEngine::Vector4 _FxBackLightTexScaleOffset; // 0x58
		::UnityEngine::Vector4 _ImageParamas; // 0x68
		::UnityEngine::Vector4 _FxOutlineColor; // 0x78
		::System::Boolean fxBackLightTexDirty; // 0x88
		::System::Boolean _FX_DESATURATE_MASK; // 0x89
		::System::Boolean _FX_OUTLINE; // 0x8A
		::System::Boolean _FX_DESATURATE; // 0x8B
		::UnityEngine::Vector4 _FxOverrideColor; // 0x8C
		::UnityEngine::Vector4 _TextureSheetPrams; // 0x9C
		::System::Boolean _FX_DESATURATE_MASK_Dirty; // 0xAC
		::System::Boolean _FX_BACKLIGHT; // 0xAD
		::System::Boolean mainTexDirty; // 0xAE
		::System::Boolean _FX_BACKLIGHT_Dirty; // 0xAF
		::UnityEngine::Vector4 _ExtraParams; // 0xB0
		::UnityEngine::Vector4 _FxOverrideTexColor; // 0xC0
		::UnityEngine::Vector4 _FxBackLightColor; // 0xD0
		::UnityEngine::Vector4 _FxOverrideTexScaleOffset; // 0xE0
		::System::Boolean _FX_OUTLINE_Dirty; // 0xF0
		::System::Boolean _FX_DESATURATE_Dirty; // 0xF1
		::System::Boolean fxOverrideTexDirty; // 0xF2
		::System::Boolean desaturateMaskDirty; // 0xF3

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_KEYWORDS_FX_OUTLINE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_OUTLINE_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_OUTLINE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_OUTLINE_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS_FX_BACKLIGHT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_BACKLIGHT_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_BACKLIGHT(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_BACKLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS_FX_DESATURATE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS_FX_DESATURATE_OFFSET))(this);
		}

		::System::Void set_KEYWORDS_FX_DESATURATE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS_FX_DESATURATE_OFFSET))(this, value);
		}

		::System::Boolean get_KEYWORDS__FX_DESATURATE_MASK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET_KEYWORDS__FX_DESATURATE_MASK_OFFSET))(this);
		}

		::System::Void set_KEYWORDS__FX_DESATURATE_MASK(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET_KEYWORDS__FX_DESATURATE_MASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__DesaturateMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__DESATURATEMASK_OFFSET))(this);
		}

		::System::Void set__DesaturateMask(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__DESATURATEMASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__FxBackLightTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXBACKLIGHTTEX_OFFSET))(this);
		}

		::System::Void set__FxBackLightTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXBACKLIGHTTEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__FxOverrideTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__FXOVERRIDETEX_OFFSET))(this);
		}

		::System::Void set__FxOverrideTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__FXOVERRIDETEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get__MainTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_GET__MAINTEX_OFFSET))(this);
		}

		::System::Void set__MainTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_SET__MAINTEX_OFFSET))(this, value);
		}

		::System::Void FlushParams(::UnityEngine::Renderer* renderer, ::UnityEngine::MaterialPropertyBlock* block)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_TEXTURESHEETRENDERER_FXPARAMS_FLUSHPARAMS_OFFSET))(this, renderer, block);
		}
	};
}
