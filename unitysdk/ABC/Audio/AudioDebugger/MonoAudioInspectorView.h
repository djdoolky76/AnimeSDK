#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_AUDIO_AUDIODEBUGGER_MONOAUDIOINSPECTORVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Audio::AudioDebugger
{
	inline static constexpr unsigned int MonoAudioInspectorView_TypeDefinitionIndex = 6786;

	class MonoAudioInspectorView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_AUDIO_AUDIODEBUGGER_MONOAUDIOINSPECTORVIEW__CTOR_OFFSET))(this);
		}
	};
}
