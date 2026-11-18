#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class COCJHGGDBCA;
namespace NPCCrowd { class NPCCrowdNativeDataManager; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace NPCCrowd::Lod { class NPCCrowdNativeLodData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13653CB0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x136533A0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_SYNCNATIVEFRAMEDATA_OFFSET UNITYSDK_OFFSET(0x13653680)
#define NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_TRYRESOLVEDIRTYNPC_OFFSET UNITYSDK_OFFSET(0x13653ED0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13654020)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdNativeLodProcessor_TypeDefinitionIndex = 61316;

	class NPCCrowdNativeLodProcessor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdLodRuntimeData*>* _dirtyRuntimeDataCache; // 0x10
		::System::Boolean _previousDataOrientedLodActive; // 0x18
		::System::Boolean _previousLodSystemEnabled; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Boolean Prepare(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_PREPARE_OFFSET))(this, manager, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_EXECUTE_OFFSET))(this, manager, deltaTime, dependsOn);
		}

		::System::Void SyncNativeFrameData(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::NPCCrowd::Lod::NPCCrowdNativeLodData* lodData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Lod::NPCCrowdNativeLodData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_SYNCNATIVEFRAMEDATA_OFFSET))(this, manager, lodData);
		}

		static ::System::Boolean TryResolveDirtyNpc(::NPCCrowd::NPCCrowdNativeDataManager* manager, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData, ::System::Int32& index, ::COCJHGGDBCA*& npcComp)
		{
			return ((::System::Boolean(*)(::NPCCrowd::NPCCrowdNativeDataManager*, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*, ::System::Int32&, ::COCJHGGDBCA*&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODPROCESSOR_TRYRESOLVEDIRTYNPC_OFFSET))(manager, lodRuntimeData, index, npcComp);
		}
	};
}
