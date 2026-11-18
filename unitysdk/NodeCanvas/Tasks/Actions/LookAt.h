#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_LOOKAT_DOLOOK_OFFSET UNITYSDK_OFFSET(0x1F301A40)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1F3019F0)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F301A30)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F301BD0)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F301BE0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int LookAt_TypeDefinitionIndex = 30869;

	class LookAt
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* lookTarget; // 0x60
		::System::Boolean repeat; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_ONUPDATE_OFFSET))(this);
		}

		::System::Void DoLook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_DOLOOK_OFFSET))(this);
		}
	};
}
