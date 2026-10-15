#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefaultExtraConfig_1_TypeDefinitionIndex = 54061;

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
