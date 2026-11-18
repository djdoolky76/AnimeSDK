#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CutsceneMaterialShaderConfig;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1F5F4EC0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F5F5250)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ENABLEENUMKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F5F8170)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_EXISTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F5F7F60)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1F5F7FE0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISAVATARSHADER_OFFSET UNITYSDK_OFFSET(0x1F5F7940)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISOBJECTSCENESHADER_OFFSET UNITYSDK_OFFSET(0x1F5F8480)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSCENESHADER_OFFSET UNITYSDK_OFFSET(0x1F5F82A0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSTANDARDAVATARSHADER_OFFSET UNITYSDK_OFFSET(0x1F5F7B20)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISUIAVATARSHADER_OFFSET UNITYSDK_OFFSET(0x1F5F7D40)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_LOADMATERIALCONFIG_OFFSET UNITYSDK_OFFSET(0x1F5F49B0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_MATERIALCHANGED_OFFSET UNITYSDK_OFFSET(0x1F5F55E0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_PROPERTYTOGGLED_OFFSET UNITYSDK_OFFSET(0x1F5F80E0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_SETFXUNCLIPKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1F5F49C0)
#define MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5F3FB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialAvatarShaderUtil_TypeDefinitionIndex = 32244;

	class MaterialAvatarShaderUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Glitch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F60);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MatCapFXKeywordStandard()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F68);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addSkipMaterial()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F70);
		}
		static ::System::String** StaticGet_Outline()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F78);
		}
		static ::System::String** StaticGet_BlurAfterChar()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F80);
		}
		static ::System::String** StaticGet_DitherAlpha()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_SceneShaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F90);
		}
		static ::System::String** StaticGet_BuildingBotLight()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28F98);
		}
		static ::System::String** StaticGet_PropNameRenderType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FA0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_setFxUnClipKeywords()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MatCapKeywordStandard()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FB0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ShaderSupportFeature()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ObjectShaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FC0);
		}
		static ::System::String** StaticGet_UseCustomReflection()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FC8);
		}
		static ::System::String** StaticGet_Transition()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FD0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addSkipMaterialRenderer()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FD8);
		}
		static ::CutsceneMaterialShaderConfig** StaticGet__cutsceneSceneMaterialShaderConfig()
		{
			return (::CutsceneMaterialShaderConfig**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FE0);
		}
		static ::System::String** StaticGet_RimGlow()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FE8);
		}
		static ::System::String** StaticGet_UsePlaneClip()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FF0);
		}
		static ::System::String** StaticGet_UseChanelMixer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x28FF8);
		}
		static ::System::String** StaticGet_AbnormalProperty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x29000);
		}
		static ::System::String** StaticGet_SecondaryEmission()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x29008);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_MatCapMultiplyGIKeywordStandard()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x29010);
		}
		static ::System::String** StaticGet_DitherAlpha2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x29018);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_AvatarShaderNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x29020);
		}
		static ::System::String** StaticGet_ClipPlane()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x29028);
		}
		static ::System::Int32* StaticGet_MatCapFX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82A0);
		}
		static ::System::Int32* StaticGet_Override2Tone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82A4);
		}
		static ::System::Int32* StaticGet_AlphaSrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82A8);
		}
		static ::System::Int32* StaticGet_OverrideRimGlow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82AC);
		}
		static ::System::Int32* StaticGet_Override()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82B0);
		}
		static ::System::Int32* StaticGet_OverrideOutline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82B4);
		}
		static ::System::Int32* StaticGet_SrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82B8);
		}
		static ::System::Int32* StaticGet_Surface()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82BC);
		}
		static ::System::Int32* StaticGet_ReceiveShadows()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82C0);
		}
		static ::System::Int32* StaticGet_MatCap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82C4);
		}
		static ::System::Int32* StaticGet_HalfResDstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82C8);
		}
		static ::System::Int32* StaticGet_MultiplyGI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82CC);
		}
		static ::System::Int32* StaticGet_HalfResAlphaSrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82D0);
		}
		static ::System::Int32* StaticGet_ScreenImage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82D4);
		}
		static ::System::Int32* StaticGet_ShadowColorFadeByZ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82D8);
		}
		static ::System::Int32* StaticGet_AlphaDstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82DC);
		}
		static ::System::Int32* StaticGet_HalfResSrcBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82E0);
		}
		static ::System::Int32* StaticGet_PropIdRenderType()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82E4);
		}
		static ::System::Int32* StaticGet_VertexStretch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82E8);
		}
		static ::System::Int32* StaticGet_HalfResAlphaDstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82EC);
		}
		static ::System::Int32* StaticGet_CharacterStencilOp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82F0);
		}
		static ::System::Int32* StaticGet_DstBlend()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialAvatarShaderUtil_TypeDefinitionIndex)->GetStaticField(0x82F4);
		}
		// static const ::System::String* UnclippedFXKeyword; // 0x0
		// static const ::System::String* MATCAP_ON; // 0x0
		// static const ::System::String* PlaneClipKeyword; // 0x0
		// static const ::System::String* KEY_RENDERTYPE_CRYSTAL; // 0x0
		// static const ::System::String* KEY_RENDERTYPE_HAIR; // 0x0
		// static const ::System::String* KEY_RENDERTYPE_SILK; // 0x0
		// static const ::System::String* KEY_RENDERTYPE_TRANSMISSION; // 0x0
		// static const ::System::String* KEY_BDUILDING_BOT_LIGHT; // 0x0
		// static const ::System::String* KEY_BLUR_AFTER_CHAR; // 0x0
		// static const ::System::String* KEY_REFLECTION_CUBE; // 0x0
		// static const ::System::String* SceneMaterialConfigPath; // 0x0
		// static const ::System::Int32 RenderType_FaceTransparent = 0x2; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void LoadMaterialConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_LOADMATERIALCONFIG_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* SetFxUnClipKeywords(::System::String* floatKey, ::System::Single floatValue, ::UnityEngine::Material* mat)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::System::String*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_SETFXUNCLIPKEYWORDS_OFFSET))(floatKey, floatValue, mat);
		}

		static ::System::Void AddSkipMaterialRenderer(::UnityEngine::Renderer* materialRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIALRENDERER_OFFSET))(materialRenderer);
		}

		static ::System::Void AddSkipMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ADDSKIPMATERIAL_OFFSET))(material);
		}

		static ::System::Void MaterialChanged(::UnityEngine::Renderer* materialRenderer, ::UnityEngine::Material* material, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_shader_pass, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* avatar_keywords_enable)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_MATERIALCHANGED_OFFSET))(materialRenderer, material, valueDic, avatar_shader_pass, avatar_keywords_enable);
		}

		static ::System::Boolean PropertyToggled(::UnityEngine::Material* material, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::String* prop)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_PROPERTYTOGGLED_OFFSET))(material, valueDic, prop);
		}

		static ::System::Single GetPropertyValue(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::String* prop)
		{
			return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_GETPROPERTYVALUE_OFFSET))(valueDic, prop);
		}

		static ::System::Boolean ExistPropertyChanged(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* valueDic, ::System::String* prop)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_EXISTPROPERTYCHANGED_OFFSET))(valueDic, prop);
		}

		static ::System::Void EnableEnumKeyword(::UnityEngine::Material* material, ::System::Int32 propValue, ::Il2CppArray<::System::String*>* enumKeys, ::System::Action_2<::System::String*, ::System::Boolean>* enableAction)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Action_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ENABLEENUMKEYWORD_OFFSET))(material, propValue, enumKeys, enableAction);
		}

		static ::System::Boolean IsAvatarShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISAVATARSHADER_OFFSET))(material);
		}

		static ::System::Boolean IsStandardAvatarShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSTANDARDAVATARSHADER_OFFSET))(material);
		}

		static ::System::Boolean IsUIAvatarShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISUIAVATARSHADER_OFFSET))(material);
		}

		static ::System::Boolean IsSceneShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISSCENESHADER_OFFSET))(material);
		}

		static ::System::Boolean IsObjectSceneShader(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALAVATARSHADERUTIL_ISOBJECTSCENESHADER_OFFSET))(material);
		}
	};
}
