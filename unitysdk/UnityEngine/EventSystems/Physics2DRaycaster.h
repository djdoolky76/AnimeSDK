#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/PhysicsRaycaster.h"
#include "unitysdk/UnityEngine/FCA3E53C2DA052B5.h"
#include "unitysdk/F5D9B2730D543D46/B22D1632AF3C5F18.h"

namespace F5D9B2730D543D46 { class A9BDD7E8F3994CE6; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_ACF68E7FF81AFE56_OFFSET UNITYSDK_OFFSET(0x4227310)
#define UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x4227B70)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int Physics2DRaycaster_TypeDefinitionIndex = 18529;

	class Physics2DRaycaster : public ::UnityEngine::EventSystems::PhysicsRaycaster
	{
	public:
		::Il2CppArray<::UnityEngine::FCA3E53C2DA052B5>* F3387D7365527D9A; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER__CTOR_OFFSET))(this);
		}

		::System::Void ACF68E7FF81AFE56(::F5D9B2730D543D46::A9BDD7E8F3994CE6* E7336521BA8945EE, ::System::Collections::Generic::List_1<::F5D9B2730D543D46::B22D1632AF3C5F18>* E438586BDA525A50)
		{
			return ((::System::Void(*)(::PVOID, ::F5D9B2730D543D46::A9BDD7E8F3994CE6*, ::System::Collections::Generic::List_1<::F5D9B2730D543D46::B22D1632AF3C5F18>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_PHYSICS2DRAYCASTER_ACF68E7FF81AFE56_OFFSET))(this, E7336521BA8945EE, E438586BDA525A50);
		}
	};
}
