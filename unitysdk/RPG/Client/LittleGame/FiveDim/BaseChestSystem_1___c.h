#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseChestSystem_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseChestSystem_1___c_TypeDefinitionIndex = 77068;

	template <typename T>
	class BaseChestSystem_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_2<::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<T>*, T>** StaticGet___9__11_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::FiveDim::BaseChestSystem_1<T>*, T>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

	};
}
