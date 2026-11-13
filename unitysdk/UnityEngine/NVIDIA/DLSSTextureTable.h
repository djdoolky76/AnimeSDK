#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Texture; }

#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_BIASCOLORMASK_OFFSET UNITYSDK_OFFSET(0x1349380)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLORINPUT_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLOROUTPUT_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_EXPOSURETEXTURE_OFFSET UNITYSDK_OFFSET(0x13493E0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_TRANSPARENCYMASK_OFFSET UNITYSDK_OFFSET(0x7F6810)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_BIASCOLORMASK_OFFSET UNITYSDK_OFFSET(0x3D6A880)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLORINPUT_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLOROUTPUT_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0xFDBF90)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x3D6A850)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSTextureTable_TypeDefinitionIndex = 5030;

	struct alignas(8) DLSSTextureTable
	{
		::UnityEngine::Texture* _colorInput_k__BackingField; // 0x10
		::UnityEngine::Texture* _colorOutput_k__BackingField; // 0x18
		::UnityEngine::Texture* _depth_k__BackingField; // 0x20
		::UnityEngine::Texture* _motionVectors_k__BackingField; // 0x28
		::UnityEngine::Texture* _transparencyMask_k__BackingField; // 0x30
		::UnityEngine::Texture* _exposureTexture_k__BackingField; // 0x38
		::UnityEngine::Texture* _biasColorMask_k__BackingField; // 0x40
		::System::Void set_colorInput(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLORINPUT_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_colorInput()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLORINPUT_OFFSET))(this);
		}

		::System::Void set_colorOutput(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLOROUTPUT_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_colorOutput()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLOROUTPUT_OFFSET))(this);
		}

		::System::Void set_depth(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_DEPTH_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_depth()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_motionVectors(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_MOTIONVECTORS_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_motionVectors()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_MOTIONVECTORS_OFFSET))(this);
		}

		::UnityEngine::Texture* get_transparencyMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_TRANSPARENCYMASK_OFFSET))(this);
		}

		::UnityEngine::Texture* get_exposureTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_EXPOSURETEXTURE_OFFSET))(this);
		}

		::System::Void set_biasColorMask(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_BIASCOLORMASK_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_biasColorMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_BIASCOLORMASK_OFFSET))(this);
		}

	};
}
