#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_AI_NAVMESHQUERYFILTER_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define UNITYENGINE_AI_NAVMESHQUERYFILTER_GET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x363D60)
#define UNITYENGINE_AI_NAVMESHQUERYFILTER_GET_COSTS_OFFSET UNITYSDK_OFFSET(0x282350)
#define UNITYENGINE_AI_NAVMESHQUERYFILTER_SETAREACOST_OFFSET UNITYSDK_OFFSET(0x9970F0)
#define UNITYENGINE_AI_NAVMESHQUERYFILTER_SET_AREAMASK_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define UNITYENGINE_AI_NAVMESHQUERYFILTER_SET_COSTS_OFFSET UNITYSDK_OFFSET(0x358B00)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshQueryFilter_TypeDefinitionIndex = 27421;

	struct alignas(8) NavMeshQueryFilter
	{
		::Il2CppArray<::System::Single>* _costs_k__BackingField; // 0x10
		::System::Int32 _areaMask_k__BackingField; // 0x18
		::System::Int32 _agentTypeID_k__BackingField; // 0x1C

		::Il2CppArray<::System::Single>* get_costs()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYFILTER_GET_COSTS_OFFSET))(this);
		}

		::System::Void set_costs(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYFILTER_SET_COSTS_OFFSET))(this, value);
		}

		::System::Int32 get_areaMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYFILTER_GET_AREAMASK_OFFSET))(this);
		}

		::System::Void set_areaMask(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYFILTER_SET_AREAMASK_OFFSET))(this, value);
		}

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYFILTER_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void SetAreaCost(::System::Int32 areaIndex, ::System::Single cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHQUERYFILTER_SETAREACOST_OFFSET))(this, areaIndex, cost);
		}
	};
}
