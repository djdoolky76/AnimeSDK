#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/FormatUsage.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/AnisotropicFiltering.h"
#include "unitysdk/UnityEngine/ColorSpace.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Texture; }
namespace UnityEngine { class UnityException; }

#define UNITYENGINE_TEXTURE_CCTOR_OFFSET UNITYSDK_OFFSET(0x206E4C60)
#define UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x206E4B00)
#define UNITYENGINE_TEXTURE_CTOR_OFFSET UNITYSDK_OFFSET(0x206E3F60)
#define UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET UNITYSDK_OFFSET(0x206E3FF0)
#define UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET UNITYSDK_OFFSET(0x206E3FE0)
#define UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET UNITYSDK_OFFSET(0x206E4000)
#define UNITYENGINE_TEXTURE_GETNATIVETEXTUREID_OFFSET UNITYSDK_OFFSET(0x206E4250)
#define UNITYENGINE_TEXTURE_GETNATIVETEXTUREPTR_OFFSET UNITYSDK_OFFSET(0x206E4240)
#define UNITYENGINE_TEXTURE_GET_ACTIVETEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x206E4290)
#define UNITYENGINE_TEXTURE_GET_ALLOWTHREADEDTEXTURECREATION_OFFSET UNITYSDK_OFFSET(0x206E4400)
#define UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0x206E41C0)
#define UNITYENGINE_TEXTURE_GET_ANISOTROPICFILTERING_OFFSET UNITYSDK_OFFSET(0x206E3FA0)
#define UNITYENGINE_TEXTURE_GET_CURRENTTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x206E42E0)
#define UNITYENGINE_TEXTURE_GET_DESIREDTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x206E42C0)
#define UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x206E40B0)
#define UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0x206E41A0)
#define UNITYENGINE_TEXTURE_GET_GRAPHICSFORMAT_OFFSET UNITYSDK_OFFSET(0x206E3FD0)
#define UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x206E0CC0)
#define UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x206E4110)
#define UNITYENGINE_TEXTURE_GET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x206E3F70)
#define UNITYENGINE_TEXTURE_GET_MIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x206E41E0)
#define UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x206E3F90)
#define UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x206E4330)
#define UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x206E42F0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGMIPMAPUPLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x206E4300)
#define UNITYENGINE_TEXTURE_GET_STREAMINGRENDERERCOUNT_OFFSET UNITYSDK_OFFSET(0x206E4310)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x206E43D0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDSIZE_OFFSET UNITYSDK_OFFSET(0x206E43E0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHERATIO_OFFSET UNITYSDK_OFFSET(0x206E43F0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x206E43B0)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECOUNT_OFFSET UNITYSDK_OFFSET(0x206E4320)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x206E4390)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREFORCELOADALL_OFFSET UNITYSDK_OFFSET(0x206E4370)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURELOADINGCOUNT_OFFSET UNITYSDK_OFFSET(0x206E4350)
#define UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREPENDINGLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x206E4340)
#define UNITYENGINE_TEXTURE_GET_TARGETTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x206E42D0)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x206E4230)
#define UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET UNITYSDK_OFFSET(0x206E4200)
#define UNITYENGINE_TEXTURE_GET_TOTALTEXTUREMEMORY_OFFSET UNITYSDK_OFFSET(0x206E42B0)
#define UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x206E4260)
#define UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x206E0CB0)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0x206E4140)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0x206E4160)
#define UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0x206E4180)
#define UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x206E4120)
#define UNITYENGINE_TEXTURE_INCREMENTUPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x206E4270)
#define UNITYENGINE_TEXTURE_INTERNAL_GETACTIVETEXTURECOLORSPACE_OFFSET UNITYSDK_OFFSET(0x206E4280)
#define UNITYENGINE_TEXTURE_SETGLOBALANISOTROPICFILTERINGLIMITS_OFFSET UNITYSDK_OFFSET(0x206E3FC0)
#define UNITYENGINE_TEXTURE_SETSTREAMINGTEXTUREMATERIALDEBUGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x206E4360)
#define UNITYENGINE_TEXTURE_SET_ALLOWTHREADEDTEXTURECREATION_OFFSET UNITYSDK_OFFSET(0x206E4410)
#define UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET UNITYSDK_OFFSET(0x206E41D0)
#define UNITYENGINE_TEXTURE_SET_ANISOTROPICFILTERING_OFFSET UNITYSDK_OFFSET(0x206E3FB0)
#define UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x206E40C0)
#define UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET UNITYSDK_OFFSET(0x206E41B0)
#define UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x206E4060)
#define UNITYENGINE_TEXTURE_SET_MASTERTEXTURELIMIT_OFFSET UNITYSDK_OFFSET(0x206E3F80)
#define UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET UNITYSDK_OFFSET(0x206E41F0)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x206E43C0)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET UNITYSDK_OFFSET(0x206E43A0)
#define UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREFORCELOADALL_OFFSET UNITYSDK_OFFSET(0x206E4380)
#define UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x206E4010)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET UNITYSDK_OFFSET(0x206E4150)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET UNITYSDK_OFFSET(0x206E4170)
#define UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET UNITYSDK_OFFSET(0x206E4190)
#define UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET UNITYSDK_OFFSET(0x206E4130)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_1_OFFSET UNITYSDK_OFFSET(0x206E45C0)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_2_OFFSET UNITYSDK_OFFSET(0x206E48B0)
#define UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET UNITYSDK_OFFSET(0x206E4420)

namespace UnityEngine
{
	inline static constexpr unsigned int Texture_TypeDefinitionIndex = 4195;

	class Texture : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_GenerateAllMips()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine", "Texture")->GetStaticField(0x15F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_CCTOR_OFFSET))();
		}

		static ::System::Int32 get_masterTextureLimit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MASTERTEXTURELIMIT_OFFSET))();
		}

		static ::System::Void set_masterTextureLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_MASTERTEXTURELIMIT_OFFSET))(a1);
		}

		::System::Int32 get_mipmapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MIPMAPCOUNT_OFFSET))(this);
		}

		static ::UnityEngine::AnisotropicFiltering get_anisotropicFiltering()
		{
			return ((::UnityEngine::AnisotropicFiltering(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ANISOTROPICFILTERING_OFFSET))();
		}

		static ::System::Void set_anisotropicFiltering(::UnityEngine::AnisotropicFiltering a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnisotropicFiltering))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ANISOTROPICFILTERING_OFFSET))(a1);
		}

		static ::System::Void SetGlobalAnisotropicFilteringLimits(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SETGLOBALANISOTROPICFILTERINGLIMITS_OFFSET))(a1, a2);
		}

		::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_GRAPHICSFORMAT_OFFSET))(this);
		}

		::System::Int32 GetDataWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDATAWIDTH_OFFSET))(this);
		}

		::System::Int32 GetDataHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDATAHEIGHT_OFFSET))(this);
		}

		::UnityEngine::Rendering::TextureDimension GetDimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETDIMENSION_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_HEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::TextureDimension get_dimension()
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::UnityEngine::Rendering::TextureDimension a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureDimension))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_DIMENSION_OFFSET))(this, a1);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ISREADABLE_OFFSET))(this);
		}

		::UnityEngine::TextureWrapMode get_wrapMode()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODE_OFFSET))(this);
		}

		::System::Void set_wrapMode(::UnityEngine::TextureWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODE_OFFSET))(this, a1);
		}

		::UnityEngine::TextureWrapMode get_wrapModeU()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEU_OFFSET))(this);
		}

		::System::Void set_wrapModeU(::UnityEngine::TextureWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEU_OFFSET))(this, a1);
		}

		::UnityEngine::TextureWrapMode get_wrapModeV()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEV_OFFSET))(this);
		}

		::System::Void set_wrapModeV(::UnityEngine::TextureWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEV_OFFSET))(this, a1);
		}

		::UnityEngine::TextureWrapMode get_wrapModeW()
		{
			return ((::UnityEngine::TextureWrapMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_WRAPMODEW_OFFSET))(this);
		}

		::System::Void set_wrapModeW(::UnityEngine::TextureWrapMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextureWrapMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_WRAPMODEW_OFFSET))(this, a1);
		}

		::UnityEngine::FilterMode get_filterMode()
		{
			return ((::UnityEngine::FilterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_FILTERMODE_OFFSET))(this);
		}

		::System::Void set_filterMode(::UnityEngine::FilterMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_FILTERMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_anisoLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ANISOLEVEL_OFFSET))(this);
		}

		::System::Void set_anisoLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ANISOLEVEL_OFFSET))(this, a1);
		}

		::System::Single get_mipMapBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_MIPMAPBIAS_OFFSET))(this);
		}

		::System::Void set_mipMapBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_MIPMAPBIAS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_texelSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_OFFSET))(this);
		}

		::System::IntPtr GetNativeTexturePtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETNATIVETEXTUREPTR_OFFSET))(this);
		}

		::System::Int32 GetNativeTextureID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GETNATIVETEXTUREID_OFFSET))(this);
		}

		::System::UInt32 get_updateCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_UPDATECOUNT_OFFSET))(this);
		}

		::System::Void IncrementUpdateCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_INCREMENTUPDATECOUNT_OFFSET))(this);
		}

		::System::Int32 Internal_GetActiveTextureColorSpace()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_INTERNAL_GETACTIVETEXTURECOLORSPACE_OFFSET))(this);
		}

		::UnityEngine::ColorSpace get_activeTextureColorSpace()
		{
			return ((::UnityEngine::ColorSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ACTIVETEXTURECOLORSPACE_OFFSET))(this);
		}

		static ::System::UInt64 get_totalTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TOTALTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_desiredTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_DESIREDTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_targetTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TARGETTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_currentTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_CURRENTTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_nonStreamingTextureMemory()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTUREMEMORY_OFFSET))();
		}

		static ::System::UInt64 get_streamingMipmapUploadCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGMIPMAPUPLOADCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingRendererCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGRENDERERCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTextureCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECOUNT_OFFSET))();
		}

		static ::System::UInt64 get_nonStreamingTextureCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_NONSTREAMINGTEXTURECOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTexturePendingLoadCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREPENDINGLOADCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTextureLoadingCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURELOADINGCOUNT_OFFSET))();
		}

		static ::System::Void SetStreamingTextureMaterialDebugProperties()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SETSTREAMINGTEXTUREMATERIALDEBUGPROPERTIES_OFFSET))();
		}

		static ::System::Boolean get_streamingTextureForceLoadAll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREFORCELOADALL_OFFSET))();
		}

		static ::System::Void set_streamingTextureForceLoadAll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREFORCELOADALL_OFFSET))(a1);
		}

		static ::System::Boolean get_streamingTextureDiscardUnusedMips()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET))();
		}

		static ::System::Void set_streamingTextureDiscardUnusedMips(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTUREDISCARDUNUSEDMIPS_OFFSET))(a1);
		}

		static ::System::Boolean get_streamingTextureCacheUnusedMips()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET))();
		}

		static ::System::Void set_streamingTextureCacheUnusedMips(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_STREAMINGTEXTURECACHEUNUSEDMIPS_OFFSET))(a1);
		}

		static ::System::UInt64 get_streamingTextureCachedCount()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDCOUNT_OFFSET))();
		}

		static ::System::UInt64 get_streamingTextureCachedSize()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHEDSIZE_OFFSET))();
		}

		static ::System::Single get_streamingTextureCacheRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_STREAMINGTEXTURECACHERATIO_OFFSET))();
		}

		static ::System::Boolean get_allowThreadedTextureCreation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_ALLOWTHREADEDTEXTURECREATION_OFFSET))();
		}

		static ::System::Void set_allowThreadedTextureCreation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_SET_ALLOWTHREADEDTEXTURECREATION_OFFSET))(a1);
		}

		::System::Boolean ValidateFormat(::UnityEngine::RenderTextureFormat a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_OFFSET))(this, a1);
		}

		::System::Boolean ValidateFormat_1(::UnityEngine::TextureFormat a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_1_OFFSET))(this, a1);
		}

		::System::Boolean ValidateFormat_2(::UnityEngine::Experimental::Rendering::GraphicsFormat a1, ::UnityEngine::Experimental::Rendering::FormatUsage a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::FormatUsage))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_VALIDATEFORMAT_2_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::UnityException*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_CREATENONREADABLEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void get_texelSize_Injected(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTURE_GET_TEXELSIZE_INJECTED_OFFSET))(this, a1);
		}

	};
}
