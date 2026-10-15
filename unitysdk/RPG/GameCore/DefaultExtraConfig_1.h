#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class DefaultExtraConfig_1 : public ::System::Object
	{
	public:
		static T* StaticGet_Get()
		{
			return (T*)UnitySDK::FromName("RPG.GameCore", "DefaultExtraConfig`1")->GetStaticField(0x0);
		}

	};
}
