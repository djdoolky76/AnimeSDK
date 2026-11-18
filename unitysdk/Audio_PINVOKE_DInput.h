#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Guid.h"

#define AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE_OFFSET UNITYSDK_OFFSET(0x1437D9B0)
#define AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE__OFFSET UNITYSDK_OFFSET(0x1437DAE0)

inline static constexpr unsigned int Audio_PINVOKE_DInput_TypeDefinitionIndex = 38684;

class Audio_PINVOKE_DInput : public ::System::Object
{
public:
	// static const ::System::Int32 SdkVersion = 0x800; // 0x0

	static ::System::Boolean DirectInput8Create(::System::IntPtr hinst, ::System::IntPtr& ppvOut)
	{
		return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE_OFFSET))(hinst, ppvOut);
	}

	static ::System::Int32 DirectInput8Create_(::PVOID _hinst, ::System::Int32 _version, ::System::Guid riidltf, ::PVOID _ppvOut, ::PVOID _punkOuter)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Guid, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_DINPUT_DIRECTINPUT8CREATE__OFFSET))(_hinst, _version, riidltf, _ppvOut, _punkOuter);
	}
};
