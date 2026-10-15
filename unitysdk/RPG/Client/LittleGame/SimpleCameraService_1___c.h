#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
namespace RPG::Client::LittleGame { template <typename T> class SimpleCameraService_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleCameraService_1___c_TypeDefinitionIndex = 76521;

	template <typename T>
	class SimpleCameraService_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

		static ::System::Action_2<::RPG::Client::LittleGame::SimpleCameraService_1<T>*, ::System::ValueTuple_3<T, ::System::String*, ::KJFIKOKBCCA>>** StaticGet___9__3_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::SimpleCameraService_1<T>*, ::System::ValueTuple_3<T, ::System::String*, ::KJFIKOKBCCA>>**)UnitySDK::FromName("RPG.Client.LittleGame", "<>c")->GetStaticField(0x0);
		}

	};
}
