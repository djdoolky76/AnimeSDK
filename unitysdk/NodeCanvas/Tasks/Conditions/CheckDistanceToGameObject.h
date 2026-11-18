#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E967350)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E967660)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1E967840)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E967A00)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckDistanceToGameObject_TypeDefinitionIndex = 29459;

	class CheckDistanceToGameObject
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* distance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* checkTarget; // 0x68
		::ParadoxNotion::CompareMethod checkType; // 0x70
		::System::Single floatingPoint; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
