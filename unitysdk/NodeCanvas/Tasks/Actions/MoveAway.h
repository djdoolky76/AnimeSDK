#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_MOVEAWAY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF585F0)
#define NODECANVAS_TASKS_ACTIONS_MOVEAWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF58930)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MoveAway_TypeDefinitionIndex = 29553;

	class MoveAway
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* stopDistance; // 0x70
		::System::Boolean waitActionFinish; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVEAWAY__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVEAWAY_ONUPDATE_OFFSET))(this);
		}
	};
}
