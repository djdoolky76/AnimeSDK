#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_TASKS_CONDITIONS_PATHEXISTS_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EF94770)
#define NODECANVAS_TASKS_CONDITIONS_PATHEXISTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF948F0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int PathExists_TypeDefinitionIndex = 30397;

	class PathExists
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* savePathAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* targetPosition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_PATHEXISTS__CTOR_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_PATHEXISTS_ONCHECK_OFFSET))(this);
		}
	};
}
