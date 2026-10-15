#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IContext; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	template <typename T>
	class SimpleViewService_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x0
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::Entitas::IContext* _Context; // 0x0
		::System::Boolean _IsDisposed; // 0x0
		// static const ::System::String* EMPTY_ASSET_PATH; // 0x0
	};
}
