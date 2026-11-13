#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class RTHandle; }

#define UNITYENGINE_RENDERING_TEXTUREXR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F652410)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1F651B90)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F651EC0)
#define UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x1F6521F0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1F650EE0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F650E30)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F650C20)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET UNITYSDK_OFFSET(0x1F650CD0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET UNITYSDK_OFFSET(0x1F650D80)
#define UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET UNITYSDK_OFFSET(0x1F650F40)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x1F650BA0)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET UNITYSDK_OFFSET(0x1F650B10)
#define UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET UNITYSDK_OFFSET(0x1F650B70)
#define UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F650FF0)
#define UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET UNITYSDK_OFFSET(0x1F650AB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureXR_TypeDefinitionIndex = 36515;

	class TextureXR : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2DArray** StaticGet_m_BlackTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x613F0);
		}

		static ::UnityEngine::Texture2D** StaticGet_m_ClearTexture()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x613F8);
		}

		static ::UnityEngine::Texture2D** StaticGet_m_MagentaTexture()
		{
			return (::UnityEngine::Texture2D**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61400);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61408);
		}

		static ::UnityEngine::Texture** StaticGet_m_BlackUIntTexture2DArray()
		{
			return (::UnityEngine::Texture**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61410);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61418);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_WhiteTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61420);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_WhiteTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61428);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_MagentaTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61430);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_MagentaTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61438);
		}

		static ::UnityEngine::Texture2DArray** StaticGet_m_ClearTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61440);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_ClearTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61448);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_ClearTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61450);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackUIntTexture2DArrayRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61458);
		}

		static ::UnityEngine::Rendering::RTHandle** StaticGet_m_BlackUIntTextureRTH()
		{
			return (::UnityEngine::Rendering::RTHandle**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61460);
		}

		static ::UnityEngine::Texture2DArray** StaticGet_m_WhiteTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61468);
		}

		static ::UnityEngine::Texture2DArray** StaticGet_m_MagentaTexture2DArray()
		{
			return (::UnityEngine::Texture2DArray**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61470);
		}

		static ::UnityEngine::Texture** StaticGet_m_BlackUIntTexture()
		{
			return (::UnityEngine::Texture**)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x61478);
		}

		static ::System::Int32* StaticGet_m_MaxViews()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.Rendering", "TextureXR")->GetStaticField(0x14130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CCTOR_OFFSET))();
		}

		static ::System::Void set_maxViews(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_SET_MAXVIEWS_OFFSET))(a1);
		}

		static ::System::Int32 get_slices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_SLICES_OFFSET))();
		}

		static ::System::Boolean get_useTexArray()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_USETEXARRAY_OFFSET))();
		}

		static ::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GET_DIMENSION_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetBlackUIntTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKUINTTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetClearTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETCLEARTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetMagentaTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETMAGENTATEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetBlackTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTURE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetBlackTextureArray()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETBLACKTEXTUREARRAY_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* GetWhiteTexture()
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_GETWHITETEXTURE_OFFSET))();
		}

		static ::System::Void Initialize(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_INITIALIZE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2DArray* CreateTexture2DArrayFromTexture2D(::UnityEngine::Texture2D* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Texture2DArray*(*)(::UnityEngine::Texture2D*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATETEXTURE2DARRAYFROMTEXTURE2D_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture* CreateBlackUIntTextureArray(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTUREARRAY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture* CreateBlackUintTexture(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::ComputeShader* a2)
		{
			return ((::UnityEngine::Texture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTUREXR_CREATEBLACKUINTTEXTURE_OFFSET))(a1, a2);
		}

	};
}
