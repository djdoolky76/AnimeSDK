#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/ABA09D021CD08194.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

namespace ABC::UI
{
	inline static constexpr unsigned int PlatformItem_TypeDefinitionIndex = 7383;

	class PlatformItem : public ::System::Object
	{
	public:
		::B39AAAD1233537D7::ABA09D021CD08194 Platform; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* View; // 0x18
		::UnityEngine::Component* Comp; // 0x20
	};
}
