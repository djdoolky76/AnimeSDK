#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBroadcastConditionCheckerSingleton_1_TypeDefinitionIndex = 63994;

	template <typename T>
	class FateGameBroadcastConditionCheckerSingleton_1 : public ::System::Object
	{
	public:
		static T* StaticGet__Instance()
		{
			return (T*)UnitySDK::FromName("RPG.Client", "FateGameBroadcastConditionCheckerSingleton`1")->GetStaticField(0x0);
		}

	};
}
