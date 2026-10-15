#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering
{
	template <typename T>
	class ComponentSingleton_1 : public ::System::Object
	{
	public:
		static T* StaticGet_s_Instance()
		{
			return (T*)UnitySDK::FromName("UnityEngine.Rendering", "ComponentSingleton`1")->GetStaticField(0x0);
		}

	};
}
