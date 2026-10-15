#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define SRINSTANTIATE_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x1ED557D0)

inline static constexpr unsigned int SRInstantiate_TypeDefinitionIndex = 35351;

	class SRInstantiate : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* Instantiate_1(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SRINSTANTIATE_INSTANTIATE_1_OFFSET))(a1);
		}

	};
