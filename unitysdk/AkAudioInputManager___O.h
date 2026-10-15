#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkCallbackManager_EventCallback;

	class AkAudioInputManager___O : public ::System::Object
	{
	public:
		static ::AkCallbackManager_EventCallback** StaticGet__0___EventCallback()
		{
			return (::AkCallbackManager_EventCallback**)UnitySDK::FromName("", "<>O")->GetStaticField(0x1A10);
		}

	};
