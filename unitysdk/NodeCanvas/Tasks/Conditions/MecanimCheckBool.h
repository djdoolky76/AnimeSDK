#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA697A0)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA69A00)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA69A90)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimCheckBool_TypeDefinitionIndex = 29251;

	class MecanimCheckBool
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* value; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKBOOL_ONCHECK_OFFSET))(this);
		}
	};
}
