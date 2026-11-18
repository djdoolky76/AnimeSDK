#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections { class IList; }

#define NODECANVAS_TASKS_ACTIONS_GETLISTCOUNT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DEA9700)
#define NODECANVAS_TASKS_ACTIONS_GETLISTCOUNT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DEA9770)
#define NODECANVAS_TASKS_ACTIONS_GETLISTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA98C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetListCount_TypeDefinitionIndex = 29496;

	class GetListCount : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::IList*>* targetList; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* saveAs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLISTCOUNT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLISTCOUNT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLISTCOUNT_ONEXECUTE_OFFSET))(this);
		}
	};
}
