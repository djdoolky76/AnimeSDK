#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Hash128.h"

namespace Coffee::UIParticleInternal
{
	template <typename T>
	class ObjectRepository_1_Entry : public ::System::Object
	{
	public:
		::UnityEngine::Hash128 hash; // 0x0
		::System::Int32 reference; // 0x0
		T storedObject; // 0x0
	};
}
