#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D5E6ED0)
#define NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D5E6F80)
#define NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E71A0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindChildByName_TypeDefinitionIndex = 30567;

	class FindChildByName
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Transform*>* saveAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* childName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDCHILDBYNAME_ONEXECUTE_OFFSET))(this);
		}
	};
}
