#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
class HEMFNMOOFAB;
namespace RPG::Client::LittleGame { template <typename T> class SimpleViewService_1; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::LittleGame
{
	template <typename T>
	class SimpleViewService_1_AssetAsyncLoadHandle : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::SimpleViewService_1<T>* ViewService; // 0x0
		T Entity; // 0x0
		::System::String* AssetName; // 0x0
		::KJFIKOKBCCA Callback; // 0x0
		::UnityEngine::GameObject* _LoadedObject; // 0x0
		::HEMFNMOOFAB* _PostLoadInterface; // 0x0
		::System::Object* _State; // 0x0
	};
}
