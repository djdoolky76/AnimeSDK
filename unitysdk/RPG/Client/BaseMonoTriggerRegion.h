#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/PDHLJJCMEDJ.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DADHNMAGKMP;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BASEMONOTRIGGERREGION_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E97D0)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0xC7E9590)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0xC7E95D0)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAP_OFFSET UNITYSDK_OFFSET(0xC7E9630)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0xC7E94D0)
#define RPG_CLIENT_BASEMONOTRIGGERREGION_SYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC7E9680)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseMonoTriggerRegion_TypeDefinitionIndex = 68621;

	class BaseMonoTriggerRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DADHNMAGKMP* GALAHGAJODG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_CTOR_OFFSET))(this);
		}

		::System::Void SetTrigger(::DADHNMAGKMP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DADHNMAGKMP*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_SETTRIGGER_OFFSET))(this, a1, a2);
		}

		::DADHNMAGKMP* GetTrigger()
		{
			return ((::DADHNMAGKMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_GETTRIGGER_OFFSET))(this);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* Overlap(::UnityEngine::LayerMask a1)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_OVERLAP_OFFSET))(this, a1);
		}

		::System::Void SyncTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEMONOTRIGGERREGION_SYNCTRANSFORM_OFFSET))(this, a1);
		}

	};
}
