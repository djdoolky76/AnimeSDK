#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkSoundEngine_GameObjectHashFunction;

	class AkSoundEngine___O : public ::System::Object
	{
	public:
		static ::AkSoundEngine_GameObjectHashFunction** StaticGet__0___InternalGameObjectHash()
		{
			return (::AkSoundEngine_GameObjectHashFunction**)UnitySDK::FromName("", "<>O")->GetStaticField(0x100F0);
		}

	};
