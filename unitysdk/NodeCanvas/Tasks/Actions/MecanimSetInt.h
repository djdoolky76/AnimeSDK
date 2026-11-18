#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETINT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D5E7B70)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETINT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D5E7C60)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E7DC0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetInt_TypeDefinitionIndex = 30345;

	class MecanimSetInt
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* setTo; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* parameterHashID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETINT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETINT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETINT_ONEXECUTE_OFFSET))(this);
		}
	};
}
