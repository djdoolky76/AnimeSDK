#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_CHECKSPEED_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB88F30)
#define NODECANVAS_TASKS_ACTIONS_CHECKSPEED_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EB88FC0)
#define NODECANVAS_TASKS_ACTIONS_CHECKSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB890E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int CheckSpeed_TypeDefinitionIndex = 30172;

	class CheckSpeed
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* value; // 0x60
		::ParadoxNotion::CompareMethod checkType; // 0x68
		::System::Single differenceThreshold; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CHECKSPEED__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CHECKSPEED_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_CHECKSPEED_ONCHECK_OFFSET))(this);
		}
	};
}
