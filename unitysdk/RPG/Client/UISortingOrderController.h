#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UISORTINGORDERCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xEEB4DB0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER_SETSORTINGORDEROFFSET_OFFSET UNITYSDK_OFFSET(0xEEB41B0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xEEB4110)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_1_OFFSET UNITYSDK_OFFSET(0xEEB4550)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_OFFSET UNITYSDK_OFFSET(0xEEB44D0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__GETBASEORDER_OFFSET UNITYSDK_OFFSET(0xEEB43F0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__GETUILAYERROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xEEB45D0)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__SETLAYER_OFFSET UNITYSDK_OFFSET(0xEEB4200)
#define RPG_CLIENT_UISORTINGORDERCONTROLLER__START_B__0_0_OFFSET UNITYSDK_OFFSET(0xEEB4DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int UISortingOrderController_TypeDefinitionIndex = 75190;

	class UISortingOrderController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _SortingOrderOffset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER_START_OFFSET))(this);
		}

		::System::Void SetSortingOrderOffset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER_SETSORTINGORDEROFFSET_OFFSET))(this, a1);
		}

		::System::Void _SetLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__SETLAYER_OFFSET))(this);
		}

		::System::Int32 _GetBaseOrder(::System::Boolean a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__GETBASEORDER_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* _GetUILayerRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__GETUILAYERROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void _ChangeSortingOrder(::UnityEngine::Canvas* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_OFFSET))(this, a1, a2);
		}

		::System::Void _ChangeSortingOrder_1(::UnityEngine::ParticleSystemRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__CHANGESORTINGORDER_1_OFFSET))(this, a1, a2);
		}

		::System::Void _Start_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISORTINGORDERCONTROLLER__START_B__0_0_OFFSET))(this);
		}

	};
}
