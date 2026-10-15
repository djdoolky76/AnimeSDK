#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorldPluginHelper_1_TypeDefinitionIndex = 57836;

	template <typename T>
	class GameWorldPluginHelper_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Index()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.GameCore", "GameWorldPluginHelper`1")->GetStaticField(0x0);
		}

	};
}
