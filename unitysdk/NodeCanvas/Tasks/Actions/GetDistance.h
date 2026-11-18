#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_GETDISTANCE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D490320)
#define NODECANVAS_TASKS_ACTIONS_GETDISTANCE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4903A0)
#define NODECANVAS_TASKS_ACTIONS_GETDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D490520)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetDistance_TypeDefinitionIndex = 29441;

	class GetDistance
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveAs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETDISTANCE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETDISTANCE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETDISTANCE_ONEXECUTE_OFFSET))(this);
		}
	};
}
