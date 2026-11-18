#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1E408E60)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E4088B0)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E409180)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL__ONEXECUTE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1E4091A0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetLinecastInfo2DAll_TypeDefinitionIndex = 29988;

	class GetLinecastInfo2DAll
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* saveNormalsAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* savePointsAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::System::Single>*>* saveDistancesAs; // 0x78
		::Il2CppArray<::UnityEngine::RaycastHit2D>* hits; // 0x80
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* saveHitGameObjectsAs; // 0x88
		::UnityEngine::LayerMask mask; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::UnityEngine::Vector3 _OnExecute_b__7_2(::UnityEngine::RaycastHit2D h)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO2DALL__ONEXECUTE_B__7_2_OFFSET))(this, h);
		}
	};
}
