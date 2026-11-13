#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/Detail/RendererResource.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ATTACHTOPLAYER_OFFSET UNITYSDK_OFFSET(0x1F44DE60)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CALCULATETEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1F44D9B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44E820)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CONTINUEPREPARING_OFFSET UNITYSDK_OFFSET(0x1F44DD00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F44B770)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_GET_NUMTEXTURESETS_OFFSET UNITYSDK_OFFSET(0x1F44D9A0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x1F44DE50)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x1F44DCF0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISSUITABLE_OFFSET UNITYSDK_OFFSET(0x1F44DD10)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET UNITYSDK_OFFSET(0x1F44C170)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET UNITYSDK_OFFSET(0x1F44C180)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x1F44DE40)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x1F44DF10)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F44DF90)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMOVIETEXTUREST_OFFSET UNITYSDK_OFFSET(0x1F44DB80)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATETEXTURES_OFFSET UNITYSDK_OFFSET(0x1F44E270)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResourceSofdecPrimeYuvRawData_TypeDefinitionIndex = 41211;

	class RendererResourceSofdecPrimeYuvRawData : public ::CriWare::CriMana::Detail::RendererResource
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnityEngine::Texture2D*>*>* textures; // 0x28
		::Il2CppArray<::System::IntPtr>* nativePixels; // 0x30
		::System::Int32 playerID; // 0x38
		::UnityEngine::Vector4 movieChromaTextureST; // 0x3C
		::System::Boolean useUserShader; // 0x4C
		::System::Boolean hasRenderedNewFrame; // 0x4D
		::System::Boolean hasTextureUpdated; // 0x4E
		::System::Boolean isStoppingForSeek; // 0x4F
		::System::Int32 currentTextureSet; // 0x50
		::System::Int32 alphaWidth; // 0x54
		::CriWare::CriMana::CodecType codecType; // 0x58
		::System::Int32 chromaHeight; // 0x5C
		::UnityEngine::Vector4 movieTextureST; // 0x60
		::System::Int32 height; // 0x70
		::UnityEngine::Vector4 movieAlphaTextureST; // 0x74
		::System::Int32 alphaHeight; // 0x84
		::System::Int32 chromaWidth; // 0x88
		::System::Int32 width; // 0x8C
		::System::Int32 drawTextureSet; // 0x90
		static ::System::Int32* StaticGet_IOSNumTextureSets()
		{
			return (::System::Int32*)UnitySDK::FromName("CriWare.CriMana.Detail", "RendererResourceSofdecPrimeYuvRawData")->GetStaticField(0x13650);
		}

		::System::Void _ctor(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CCTOR_OFFSET))();
		}

		static ::System::Int32 get_NumTextureSets()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_GET_NUMTEXTURESETS_OFFSET))();
		}

		::System::Void OnDisposeManaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEMANAGED_OFFSET))(this);
		}

		::System::Void OnDisposeUnmanaged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONDISPOSEUNMANAGED_OFFSET))(this);
		}

		::System::Boolean IsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean ContinuePreparing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CONTINUEPREPARING_OFFSET))(this);
		}

		::System::Boolean IsSuitable(::System::Int32 a1, ::CriWare::CriMana::MovieInfo* a2, ::System::Boolean a3, ::UnityEngine::Shader* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ISSUITABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OnPlayerStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ONPLAYERSTOPFORSEEK_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		::System::Void AttachToPlayer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_ATTACHTOPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean UpdateFrame(::System::Int32 a1, ::CriWare::CriMana::FrameInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::FrameInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UpdateMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void UpdateMovieTextureST(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATEMOVIETEXTUREST_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_UPDATETEXTURES_OFFSET))(this);
		}

		static ::System::Void CalculateTextureSize(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::CriWare::CriMana::CodecType a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriMana::CodecType, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCESOFDECPRIMEYUVRAWDATA_CALCULATETEXTURESIZE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
}
