#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;

#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C54060)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C540C0)
#define SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C53FE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskSchedulerException_TypeDefinitionIndex = 11564;

	class TaskSchedulerException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKSCHEDULEREXCEPTION__CTOR_2_OFFSET))(this, FA644E43CA202E59);
		}
	};
}
