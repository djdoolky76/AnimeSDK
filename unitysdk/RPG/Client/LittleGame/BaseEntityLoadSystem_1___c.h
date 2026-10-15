#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { template <typename T> class BaseEntityLoadSystem_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseEntityLoadSystem_1___c_TypeDefinitionIndex = 42084;

	template <typename T>
	class BaseEntityLoadSystem_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

	};
}
