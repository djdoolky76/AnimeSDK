#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleViewService_1_AssetAsyncLoadHandle___c_TypeDefinitionIndex = 76530;

	template <typename T>
	class SimpleViewService_1_AssetAsyncLoadHandle___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

	};
}
