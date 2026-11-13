#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define TMPRO_SHADERUTILITIES_ARERUNTIMESHADERREFSREADY_OFFSET UNITYSDK_OFFSET(0x19B8D970)
#define TMPRO_SHADERUTILITIES_CCTOR_OFFSET UNITYSDK_OFFSET(0x19B8DB10)
#define TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET UNITYSDK_OFFSET(0x19B8E4A0)
#define TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET UNITYSDK_OFFSET(0x19B8ED00)
#define TMPRO_SHADERUTILITIES_GETPADDING_OFFSET UNITYSDK_OFFSET(0x19B8E600)
#define TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x19B8DBC0)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET UNITYSDK_OFFSET(0x19B8D940)
#define TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET UNITYSDK_OFFSET(0x19B8D910)
#define TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET UNITYSDK_OFFSET(0x19B8E4B0)
#define TMPRO_SHADERUTILITIES_SETRUNTIMESHADERREFS_OFFSET UNITYSDK_OFFSET(0x19B8DA00)
#define TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET UNITYSDK_OFFSET(0x19B8E000)

namespace TMPro
{
	inline static constexpr unsigned int ShaderUtilities_TypeDefinitionIndex = 45706;

	class ShaderUtilities : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Keyword_Ratios()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58720);
		}

		static ::System::String** StaticGet_Keyword_Glow()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58728);
		}

		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileSDF()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58730);
		}

		static ::System::String** StaticGet_Keyword_MASK_SOFT()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58738);
		}

		static ::System::String** StaticGet_Keyword_Bevel()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58740);
		}

		static ::System::String** StaticGet_Keyword_Underlay()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58748);
		}

		static ::UnityEngine::Shader** StaticGet_k_ShaderRef_MobileBitmap()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58750);
		}

		static ::System::String** StaticGet_Keyword_MASK_TEX()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58758);
		}

		static ::System::String** StaticGet_ShaderTag_CullMode()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58760);
		}

		static ::System::String** StaticGet_ShaderTag_ZTestMode()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58768);
		}

		static ::System::String** StaticGet_Keyword_Outline()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58770);
		}

		static ::System::String** StaticGet_Keyword_MASK_HARD()
		{
			return (::System::String**)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x58778);
		}

		static ::System::Int32* StaticGet_ID_OutlineTex()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CE0);
		}

		static ::System::Int32* StaticGet_ID_UseClipRect()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CE4);
		}

		static ::System::Int32* StaticGet_ID_FaceColor()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CE8);
		}

		static ::System::Int32* StaticGet_ID_StencilWriteMask()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CEC);
		}

		static ::System::Int32* StaticGet_ID_PerspectiveFilter()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CF0);
		}

		static ::System::Int32* StaticGet_ID_EnvMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CF4);
		}

		static ::System::Int32* StaticGet_ID_ScaleRatio_B()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CF8);
		}

		static ::System::Int32* StaticGet_ID_ScaleRatio_C()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12CFC);
		}

		static ::System::Int32* StaticGet_ID_VertexOffsetY()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D00);
		}

		static ::System::Int32* StaticGet_ID_GlowPower()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D04);
		}

		static ::System::Int32* StaticGet_ID_Outline2Color()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D08);
		}

		static ::System::Int32* StaticGet_ID_OutlineColor()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D0C);
		}

		static ::System::Int32* StaticGet_ID_TextureWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D10);
		}

		static ::System::Int32* StaticGet_ID_ScaleRatio_A()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D14);
		}

		static ::System::Int32* StaticGet_ID_MainTex()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D18);
		}

		static ::System::Int32* StaticGet_ID_GlowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D1C);
		}

		static ::System::Int32* StaticGet_ID_EnvMap()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D20);
		}

		static ::System::Int32* StaticGet_ID_StencilID()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D24);
		}

		static ::System::Int32* StaticGet_ID_BevelAmount()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D28);
		}

		static ::System::Int32* StaticGet_ID_FaceDilate()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D2C);
		}

		static ::System::Int32* StaticGet_ID_MaskSoftnessY()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D30);
		}

		static ::System::Int32* StaticGet_ID_WeightBold()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D34);
		}

		static ::System::Int32* StaticGet_ID_GradientScale()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D38);
		}

		static ::System::Int32* StaticGet_ID_UnderlayDilate()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D3C);
		}

		static ::System::Int32* StaticGet_ID_Shininess()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D40);
		}

		static ::System::Int32* StaticGet_ID_UnderlayOffsetX()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D44);
		}

		static ::System::Int32* StaticGet_ID_MaskCoord()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D48);
		}

		static ::System::Int32* StaticGet_ID_OutlineWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D4C);
		}

		static ::System::Int32* StaticGet_ID_MaskSoftnessX()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D50);
		}

		static ::System::Int32* StaticGet_ID_UnderlayOffsetY()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D54);
		}

		static ::System::Int32* StaticGet_ID_Outline2Width()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D58);
		}

		static ::System::Int32* StaticGet_ID_GlowOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D5C);
		}

		static ::System::Int32* StaticGet_ID_ScaleX()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D60);
		}

		static ::System::Int32* StaticGet_ID_UnderlaySoftness()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D64);
		}

		static ::System::Boolean* StaticGet_isInitialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D68);
		}

		static ::System::Int32* StaticGet_ID_Padding()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D6C);
		}

		static ::System::Int32* StaticGet_ID_FaceTex()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D70);
		}

		static ::System::Int32* StaticGet_ID_GlowInner()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D74);
		}

		static ::System::Int32* StaticGet_ID_ScaleY()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D78);
		}

		static ::System::Int32* StaticGet_ID_EnvMatrixRotation()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D7C);
		}

		static ::System::Int32* StaticGet_ID_UnderlayColor()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D80);
		}

		static ::System::Int32* StaticGet_ID_LightAngle()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D84);
		}

		static ::System::Int32* StaticGet_ID_WeightNormal()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D88);
		}

		static ::System::Int32* StaticGet_ID_StencilReadMask()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D8C);
		}

		static ::System::Int32* StaticGet_ID_ClipRect()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D90);
		}

		static ::System::Int32* StaticGet_ID_OutlineSoftness()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D94);
		}

		static ::System::Int32* StaticGet_ID_TextureHeight()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D98);
		}

		static ::System::Int32* StaticGet_ID_Sharpness()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12D9C);
		}

		static ::System::Int32* StaticGet_ID_GlowOuter()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12DA0);
		}

		static ::System::Single* StaticGet_m_clamp()
		{
			return (::System::Single*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12DA4);
		}

		static ::System::Int32* StaticGet_ID_VertexOffsetX()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12DA8);
		}

		static ::System::Int32* StaticGet_ID_StencilComp()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12DAC);
		}

		static ::System::Int32* StaticGet_ID_ShaderFlags()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12DB0);
		}

		static ::System::Int32* StaticGet_ID_StencilOp()
		{
			return (::System::Int32*)UnitySDK::FromName("TMPro", "ShaderUtilities")->GetStaticField(0x12DB4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Shader* get_ShaderRef_MobileSDF()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILESDF_OFFSET))();
		}

		static ::UnityEngine::Shader* get_ShaderRef_MobileBitmap()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GET_SHADERREF_MOBILEBITMAP_OFFSET))();
		}

		static ::System::Boolean AreRuntimeShaderRefsReady()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ARERUNTIMESHADERREFSREADY_OFFSET))();
		}

		static ::System::Void SetRuntimeShaderRefs(::UnityEngine::Shader* a1, ::UnityEngine::Shader* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_SETRUNTIMESHADERREFS_OFFSET))(a1, a2);
		}

		static ::System::Void GetShaderPropertyIDs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETSHADERPROPERTYIDS_OFFSET))();
		}

		static ::System::Void UpdateShaderRatios(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_UPDATESHADERRATIOS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetFontExtent(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETFONTEXTENT_OFFSET))(a1);
		}

		static ::System::Boolean IsMaskingEnabled(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_ISMASKINGENABLED_OFFSET))(a1);
		}

		static ::System::Single GetPadding(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetPadding_1(::Il2CppArray<::UnityEngine::Material*>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_SHADERUTILITIES_GETPADDING_1_OFFSET))(a1, a2, a3);
		}

	};
}
