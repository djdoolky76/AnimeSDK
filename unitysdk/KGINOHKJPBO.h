#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define KGINOHKJPBO_FIAEJAEDMGD_OFFSET UNITYSDK_OFFSET(0xB3E7260)
#define KGINOHKJPBO_NLIHNCFLIGN_1_OFFSET UNITYSDK_OFFSET(0xB3E70A0)
#define KGINOHKJPBO_NLIHNCFLIGN_OFFSET UNITYSDK_OFFSET(0xB3E6F00)

inline static constexpr unsigned int KGINOHKJPBO_TypeDefinitionIndex = 59369;

	class KGINOHKJPBO : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* NLIHNCFLIGN(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KGINOHKJPBO_NLIHNCFLIGN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* NLIHNCFLIGN_1(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + KGINOHKJPBO_NLIHNCFLIGN_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::GameObject* FIAEJAEDMGD(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KGINOHKJPBO_FIAEJAEDMGD_OFFSET))(a1, a2);
		}

	};
