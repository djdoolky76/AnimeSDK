#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define KBBEIHNNIJG_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0xB2E6A60)

inline static constexpr unsigned int KBBEIHNNIJG_TypeDefinitionIndex = 72781;

	class KBBEIHNNIJG : public ::System::Object
	{
	public:
		static ::System::Boolean IsPoolable(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KBBEIHNNIJG_ISPOOLABLE_OFFSET))(a1);
		}

	};
