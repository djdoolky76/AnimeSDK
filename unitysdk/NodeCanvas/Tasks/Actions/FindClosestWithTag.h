#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E965FA0)
#define NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9663C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindClosestWithTag_TypeDefinitionIndex = 30493;

	class FindClosestWithTag
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* ignoreChildren; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveObjectAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* searchTag; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCLOSESTWITHTAG_ONEXECUTE_OFFSET))(this);
		}
	};
}
