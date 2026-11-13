#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Profiling/Sampler.h"
namespace System { class String; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CCTOR_OFFSET UNITYSDK_OFFSET(0x203DF1D0)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x203DF1C0)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET UNITYSDK_OFFSET(0x203DF110)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203DF0E0)
#define UNITYENGINE_PROFILING_CUSTOMSAMPLER_CTOR_OFFSET UNITYSDK_OFFSET(0x203DF0C0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int CustomSampler_TypeDefinitionIndex = 4519;

	class CustomSampler : public ::UnityEngine::Profiling::Sampler
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_s_InvalidCustomSampler()
		{
			return (::UnityEngine::Profiling::CustomSampler**)UnitySDK::FromName("UnityEngine.Profiling", "CustomSampler")->GetStaticField(0x10F10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Profiling::CustomSampler* Create(::System::String* a1)
		{
			return ((::UnityEngine::Profiling::CustomSampler*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATE_OFFSET))(a1);
		}

		static ::System::IntPtr CreateInternal(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_CUSTOMSAMPLER_CREATEINTERNAL_OFFSET))(a1);
		}

	};
}
