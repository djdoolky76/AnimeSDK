#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { template <typename T> class IContext_1; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleViewService_1_TypeDefinitionIndex = 76527;

	template <typename T>
	class SimpleViewService_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x0
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::Entitas::IContext_1<T>* _Context; // 0x0
		::System::Boolean _IsDisposed; // 0x0
		// static const ::System::String* EMPTY_ASSET_PATH; // 0x0
	};
}
