#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class RtCharacterControllerBuilderInstance_1 : public ::System::Object
	{
	public:
		static T* StaticGet_Instance()
		{
			return (T*)UnitySDK::FromName("RPG.GameCore", "RtCharacterControllerBuilderInstance`1")->GetStaticField(0x0);
		}

	};
}
