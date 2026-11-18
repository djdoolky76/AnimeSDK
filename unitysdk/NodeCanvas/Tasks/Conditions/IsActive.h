#pragma once
#include "unitysdk/unitysdk.h"

#define NODECANVAS_TASKS_CONDITIONS_ISACTIVE_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EF6E070)
#define NODECANVAS_TASKS_CONDITIONS_ISACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6E0D0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsActive_TypeDefinitionIndex = 30013;

	class IsActive
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISACTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISACTIVE_ONCHECK_OFFSET))(this);
		}
	};
}
