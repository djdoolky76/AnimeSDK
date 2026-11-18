#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace System { class Object; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_BUILDREQUESTS_OFFSET UNITYSDK_OFFSET(0x680ED0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x680F30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x680EC0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_REMOVEROOTMOTION_OFFSET UNITYSDK_OFFSET(0x680F10)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_SamplePoseJob_TypeDefinitionIndex = 72634;

	struct alignas(8) NPCAccessoryAnimatorManager_SamplePoseJob
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> Bones; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> Samples; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> Roots; // 0x30
		::System::Byte _padding2[0x8];
		::System::Int32 BoneCount; // 0x40
		::System::Int32 InstanceId; // 0x44
		::System::Int32 RootBoneIndex; // 0x48

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_EXECUTE_OFFSET))(this);
		}

		::System::Void BuildRequests(::Unity::Collections::NativeArray_1<::System::Object*> requests, ::Unity::Collections::NativeSlice_1<::System::Object*> sampleDatas, ::Unity::Collections::NativeArray_1<::System::Single> rootMotions)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Object*>, ::Unity::Collections::NativeSlice_1<::System::Object*>, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_BUILDREQUESTS_OFFSET))(this, requests, sampleDatas, rootMotions);
		}

		::System::Void RemoveRootMotion(::Unity::Collections::NativeArray_1<::System::Object*> requests)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Object*>))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_REMOVEROOTMOTION_OFFSET))(this, requests);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_SAMPLEPOSEJOB_DISPOSE_OFFSET))(this);
		}
	};
}
