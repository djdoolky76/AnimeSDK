#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CHECKISFREEDRT_OFFSET UNITYSDK_OFFSET(0x1D71A600)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CLEARUSEOFRTONINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D718D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D71A650)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1D719630)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D718C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D718B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONPRERENDERTHIS_OFFSET UNITYSDK_OFFSET(0x1D718FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D718CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D71A720)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D71A6C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VideoMipGenerator_TypeDefinitionIndex = 26870;

	class VideoMipGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__ScreenMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VideoMipGenerator_TypeDefinitionIndex)->GetStaticField(0x6F50);
		}
		static ::System::Int32* StaticGet__MipScreenMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VideoMipGenerator_TypeDefinitionIndex)->GetStaticField(0x6F54);
		}
		static ::System::Int32* StaticGet__FrameIsVideo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VideoMipGenerator_TypeDefinitionIndex)->GetStaticField(0x6F58);
		}
		::System::Single blurAmount; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Video::VideoClip* preVideoClip; // 0x20
		::UnityEngine::Video::VideoPlayer* m_VideoPlayer; // 0x28
		::System::Boolean bindSuccess; // 0x30
		::System::Byte _padding1[0x7];
		::UnityEngine::MeshRenderer* renderer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ClearUseOfRTOnInstance(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CLEARUSEOFRTONINSTANCE_OFFSET))(this, tex);
		}

		::System::Void OnPreRenderThis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_ONPRERENDERTHIS_OFFSET))(this);
		}

		::UnityEngine::Texture* CheckIsFreedRT(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_CHECKISFREEDRT_OFFSET))(this, tex);
		}

		::System::Boolean Init(::UnityEngine::Texture* srcVideo, ::UnityEngine::Material* material, ::UnityEngine::Video::VideoPlayer* videoPlayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Material*, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_INIT_OFFSET))(this, srcVideo, material, videoPlayer);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIDEOMIPGENERATOR_DISPOSE_OFFSET))(this);
		}
	};
}
