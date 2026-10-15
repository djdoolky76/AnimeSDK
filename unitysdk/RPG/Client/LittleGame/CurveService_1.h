#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { template <typename T> class Services_1; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int CurveService_1_TypeDefinitionIndex = 76479;

	template <typename T>
	class CurveService_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Root; // 0x0
		::RPG::Client::LittleGame::Services_1<T>* _Services; // 0x0
		::System::Action* _LogErrorAction; // 0x0
	};
}
