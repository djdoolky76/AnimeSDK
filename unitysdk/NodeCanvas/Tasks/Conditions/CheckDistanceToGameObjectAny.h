#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/CompareMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D5E8620)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D5E8980)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D5E8F80)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9140)
#define NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__ONCHECK_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D5E91D0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckDistanceToGameObjectAny_TypeDefinitionIndex = 29617;

	class CheckDistanceToGameObjectAny
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* distance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* allResults; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetObjects; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* closerResult; // 0x78
		::ParadoxNotion::CompareMethod checkType; // 0x80
		::System::Single floatingPoint; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single _OnCheck_b__8_0(::UnityEngine::GameObject* x)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKDISTANCETOGAMEOBJECTANY__ONCHECK_B__8_0_OFFSET))(this, x);
		}
	};
}
