#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Lod/LodDistanceOverrideEntry.h"

namespace NPCCrowd::AI { class PathGraphAssetSO; }

#define NPCCROWD_PATHGRAPHLODOVERRIDEAPPLIER_APPLYALLFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE1267B0)
#define NPCCROWD_PATHGRAPHLODOVERRIDEAPPLIER_CLEARALLFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE126B60)
#define NPCCROWD_PATHGRAPHLODOVERRIDEAPPLIER_COMPUTEOVERRIDEDISTANCES_OFFSET UNITYSDK_OFFSET(0xE126500)

namespace NPCCrowd
{
	inline static constexpr unsigned int PathGraphLodOverrideApplier_TypeDefinitionIndex = 40046;

	class PathGraphLodOverrideApplier : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>* ComputeOverrideDistances(::Il2CppArray<::System::Single>* baseDistancesCm, ::NPCCrowd::Lod::LodDistanceOverrideEntry overrideEntry, ::System::Int32 graphID)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::Il2CppArray<::System::Single>*, ::NPCCrowd::Lod::LodDistanceOverrideEntry, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHLODOVERRIDEAPPLIER_COMPUTEOVERRIDEDISTANCES_OFFSET))(baseDistancesCm, overrideEntry, graphID);
		}

		static ::System::Void ApplyAllFromConfig(::NPCCrowd::AI::PathGraphAssetSO* graphSo)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::PathGraphAssetSO*))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHLODOVERRIDEAPPLIER_APPLYALLFROMCONFIG_OFFSET))(graphSo);
		}

		static ::System::Void ClearAllFromConfig(::NPCCrowd::AI::PathGraphAssetSO* graphSo)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::PathGraphAssetSO*))((::PBYTE)hIl2Cpp + NPCCROWD_PATHGRAPHLODOVERRIDEAPPLIER_CLEARALLFROMCONFIG_OFFSET))(graphSo);
		}
	};
}
