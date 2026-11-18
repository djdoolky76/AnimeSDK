#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int SavedStructState_1_TypeDefinitionIndex = 32151;

	template <typename T>
	class SavedStructState_1 : public ::System::Object
	{
	public:
		T m_State; // 0x0
		::System::Object* m_RestoreAction; // 0x0
		::System::Action* m_StaticDisposeCurrentState; // 0x0
	};
}
