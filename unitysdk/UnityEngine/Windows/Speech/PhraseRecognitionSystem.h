#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechError.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechSystemStatus.h"
namespace UnityEngine::Windows::Speech { class PhraseRecognitionSystem_ErrorDelegate; }
namespace UnityEngine::Windows::Speech { class PhraseRecognitionSystem_StatusDelegate; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0x1F441390)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKESTATUSCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1F4413D0)

namespace UnityEngine::Windows::Speech
{
	class PhraseRecognitionSystem : public ::System::Object
	{
	public:
		static ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate** StaticGet_OnStatusChanged()
		{
			return (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate**)UnitySDK::FromName("UnityEngine.Windows.Speech", "PhraseRecognitionSystem")->GetStaticField(0x12E60);
		}

		static ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate** StaticGet_OnError()
		{
			return (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate**)UnitySDK::FromName("UnityEngine.Windows.Speech", "PhraseRecognitionSystem")->GetStaticField(0x12E68);
		}

		static ::System::Void PhraseRecognitionSystem_InvokeErrorEvent(::UnityEngine::Windows::Speech::SpeechError a1)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechError))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKEERROREVENT_OFFSET))(a1);
		}

		static ::System::Void PhraseRecognitionSystem_InvokeStatusChangedEvent(::UnityEngine::Windows::Speech::SpeechSystemStatus a1)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechSystemStatus))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKESTATUSCHANGEDEVENT_OFFSET))(a1);
		}

	};
}
