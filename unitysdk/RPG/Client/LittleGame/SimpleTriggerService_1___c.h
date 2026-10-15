#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { template <typename T> class SimpleTriggerService_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleTriggerService_1___c_TypeDefinitionIndex = 76525;

	template <typename T>
	class SimpleTriggerService_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

	};
}
