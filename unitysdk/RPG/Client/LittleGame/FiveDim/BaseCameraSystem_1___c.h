#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class BaseCameraSystem_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BaseCameraSystem_1___c_TypeDefinitionIndex = 76911;

	template <typename T>
	class BaseCameraSystem_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>** StaticGet___9__18_0()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>** StaticGet___9__18_1()
		{
			return (::System::Action_3<::RPG::Client::LittleGame::FiveDim::BaseCameraSystem_1<T>*, T, ::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.Client.LittleGame.FiveDim", "<>c")->GetStaticField(0x0);
		}

	};
}
