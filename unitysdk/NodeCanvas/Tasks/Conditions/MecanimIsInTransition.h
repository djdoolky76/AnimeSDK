#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA69E40)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA69E80)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA69EF0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimIsInTransition_TypeDefinitionIndex = 30192;

	class MecanimIsInTransition
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* layerIndex; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_ONCHECK_OFFSET))(this);
		}
	};
}
