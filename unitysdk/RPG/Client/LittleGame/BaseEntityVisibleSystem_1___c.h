#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityVisibleSystem_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityVisibleSystem_1___c_TypeDefinitionIndex = 42088;

	template <typename T>
	class BaseEntityVisibleSystem_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_2<::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<T>*, ::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<T>*, ::System::String*>**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_3<::System::Single, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<T>*, ::System::Int32>** StaticGet___9__12_0()
		{
			return (::System::Action_3<::System::Single, ::RPG::Client::LittleGame::BaseEntityVisibleSystem_1<T>*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

	};
}
