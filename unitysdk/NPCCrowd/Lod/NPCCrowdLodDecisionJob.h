#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/FNPCCrowdLodDecisionFragment.h"
#include "unitysdk/NPCCrowd/Lod/FNPCCrowdLodFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

#define NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_APPLYDEBUGGERLODCLAMP_OFFSET UNITYSDK_OFFSET(0x5CA8A0)
#define NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_ENQUEUECOMMANDIFNEEDED_OFFSET UNITYSDK_OFFSET(0x5CA8B0)
#define NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5CA890)
#define NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_HASMAINTHREADWORK_OFFSET UNITYSDK_OFFSET(0xEEAB760)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodDecisionJob_TypeDefinitionIndex = 63184;

	struct alignas(8) NPCCrowdLodDecisionJob
	{
		::Unity::Collections::NativeArray_1<::NPCCrowd::Lod::FNPCCrowdLodFragment> LodFragments; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment> DecisionOutputs; // 0x20
		::System::Byte _padding1[0x8];
		::System::Object* DecisionCommands; // 0x30
		::System::Byte _padding2[0x10];
		::System::Boolean ForceCpuLod; // 0x48
		::System::Boolean ForceGpuLod; // 0x49

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_EXECUTE_OFFSET))(this, index);
		}

		::System::Int32 ApplyDebuggerLodClamp(::System::Int32 lod)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_APPLYDEBUGGERLODCLAMP_OFFSET))(this, lod);
		}

		::System::Void EnqueueCommandIfNeeded(::System::Int32 index, ::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment decision, ::NPCCrowd::Lod::FNPCCrowdLodFragment fragment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment, ::NPCCrowd::Lod::FNPCCrowdLodFragment))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_ENQUEUECOMMANDIFNEEDED_OFFSET))(this, index, decision, fragment);
		}

		static ::System::Boolean HasMainThreadWork(::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment decision, ::NPCCrowd::Lod::FNPCCrowdLodFragment fragment)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment, ::NPCCrowd::Lod::FNPCCrowdLodFragment))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODDECISIONJOB_HASMAINTHREADWORK_OFFSET))(decision, fragment);
		}
	};
}
