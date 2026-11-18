#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF93190)
#define NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF93400)
#define NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF934E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetGameObjectPosition_TypeDefinitionIndex = 30130;

	class GetGameObjectPosition
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveAs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETGAMEOBJECTPOSITION_ONEXECUTE_OFFSET))(this);
		}
	};
}
