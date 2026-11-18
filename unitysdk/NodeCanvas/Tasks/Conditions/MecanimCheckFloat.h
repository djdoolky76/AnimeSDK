#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF22B00)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EF22DA0)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF22E90)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimCheckFloat_TypeDefinitionIndex = 29962;

	class MecanimCheckFloat
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* value; // 0x68
		::ParadoxNotion::CompareMethod comparison; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMCHECKFLOAT_ONCHECK_OFFSET))(this);
		}
	};
}
