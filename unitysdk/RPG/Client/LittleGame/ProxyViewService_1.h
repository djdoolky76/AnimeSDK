#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLPKMIIANI;
namespace Entitas { class IContext; }
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ProxyViewService_1_TypeDefinitionIndex = 76518;

	template <typename T>
	class ProxyViewService_1 : public ::System::Object
	{
	public:
		::HCLPKMIIANI* _LittleGameInstance; // 0x0
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::Entitas::IContext* _Context; // 0x0
		::UnityEngine::Transform* _Root; // 0x0
	};
}
