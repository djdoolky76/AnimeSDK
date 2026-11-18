#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/CrowdLODDistanceSetting.h"
#include "unitysdk/NPCCrowd/Lod/LODItem.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodNativeChannel.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/NPCCrowd/Lod/ConditionData.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace NPCCrowd::Lod { class NPCCrowdDistanceManager_NpcCrowdDistanceCheck; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_1_OFFSET UNITYSDK_OFFSET(0x15FA2D00)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_OFFSET UNITYSDK_OFFSET(0x15FA2C10)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DELAYUNREGISTERLODREFPOINT_OFFSET UNITYSDK_OFFSET(0x15FA56F0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTFROMPOOL_OFFSET UNITYSDK_OFFSET(0x15FA4290)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15FA55F0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_DISTANCECALLBACK_OFFSET UNITYSDK_OFFSET(0x15FA59C0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETLODINDEX_1_OFFSET UNITYSDK_OFFSET(0x15FA60A0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETLODINDEX_OFFSET UNITYSDK_OFFSET(0x15FA5F30)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETPARAMSETTING_OFFSET UNITYSDK_OFFSET(0x15FA3DB0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_1_OFFSET UNITYSDK_OFFSET(0x15FA35A0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_OFFSET UNITYSDK_OFFSET(0x15FA2DF0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHREGISTRY_OFFSET UNITYSDK_OFFSET(0x15FA3260)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERDISTANCEPAIR_OFFSET UNITYSDK_OFFSET(0x15FA4380)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODITEM_OFFSET UNITYSDK_OFFSET(0x15FA3FF0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODREFPOINT_OFFSET UNITYSDK_OFFSET(0x15FA5000)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODITEMPARAMKEY_OFFSET UNITYSDK_OFFSET(0x15FA4C60)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODPARAMENABLE_OFFSET UNITYSDK_OFFSET(0x15FA2D90)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_SHOULDWRITENATIVEDISTANCELODINDEX_OFFSET UNITYSDK_OFFSET(0x15FA5EB0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_TRYGETLODINDEX_OFFSET UNITYSDK_OFFSET(0x15FA6110)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODITEM_OFFSET UNITYSDK_OFFSET(0x15FA52F0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODREFPOINT_OFFSET UNITYSDK_OFFSET(0x15FA5760)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UPDATELODITEMBIAS_OFFSET UNITYSDK_OFFSET(0x15FA3A20)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_UPDATENATIVELODINDEX_OFFSET UNITYSDK_OFFSET(0x15FA48B0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE_WRITENATIVEDISTANCELODINDEX_OFFSET UNITYSDK_OFFSET(0x15FA4AD0)
#define NPCCROWD_LOD_NPCCROWDLODINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA28F0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLODInstance_TypeDefinitionIndex = 80423;

	class NPCCrowdLODInstance : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidParamKey = -0x1; // 0x0
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::LODItem>* lodItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Lod::CrowdLODDistanceSetting>* lodParams; // 0x18
		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>>*>* entity2Handlers; // 0x20
		::System::Collections::Generic::HashSet_1<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*>* lodRefPoints; // 0x28
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*>* dictPool; // 0x30
		::NPCCrowd::Lod::NPCCrowdDistanceManager_NpcCrowdDistanceCheck* callback; // 0x38
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>>*>* listCache; // 0x40
		::NPCCrowd::Lod::NPCCrowdLodNativeChannel nativeChannel; // 0x48
		::System::Int32 curValidParam; // 0x4C

		::System::Void _ctor(::NPCCrowd::Lod::NPCCrowdLodNativeChannel nativeChannel)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodNativeChannel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE__CTOR_OFFSET))(this, nativeChannel);
		}

		::System::Void AddLODParams(::Il2CppArray<::System::Single>* lodDis, ::System::Single lodBias, ::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_OFFSET))(this, lodDis, lodBias, key);
		}

		::System::Void AddLODParams_1(::NPCCrowd::Lod::CrowdLODDistanceSetting setting, ::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::CrowdLODDistanceSetting, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_ADDLODPARAMS_1_OFFSET))(this, setting, key);
		}

		::System::Void SetLODParamEnable(::System::Int32 paramKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODPARAMENABLE_OFFSET))(this, paramKey);
		}

		::System::Void RefreshLODParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_OFFSET))(this);
		}

		::System::Void RefreshLODParams_1(::System::Single softArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHLODPARAMS_1_OFFSET))(this, softArea);
		}

		::System::Void UpdateLODItemBias(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Single bias)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UPDATELODITEMBIAS_OFFSET))(this, i, bias);
		}

		::NPCCrowd::Lod::CrowdLODDistanceSetting GetParamSetting(::NPCCrowd::Lod::LODItem item)
		{
			return ((::NPCCrowd::Lod::CrowdLODDistanceSetting(*)(::PVOID, ::NPCCrowd::Lod::LODItem))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETPARAMSETTING_OFFSET))(this, item);
		}

		::System::Void RefreshRegistry(::System::Int32 registry, ::NPCCrowd::Lod::LODItem item, ::System::Single softArea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::LODItem, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REFRESHREGISTRY_OFFSET))(this, registry, item, softArea);
		}

		::System::Void RegisterLODItem(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Single bias, ::System::Int32 paramKey, ::System::Int32 nativeLodIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODITEM_OFFSET))(this, i, bias, paramKey, nativeLodIndex);
		}

		::System::Void UpdateNativeLodIndex(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Int32 nativeLodIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UPDATENATIVELODINDEX_OFFSET))(this, i, nativeLodIndex);
		}

		::System::Void SetLODItemParamKey(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Int32 paramKey)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_SETLODITEMPARAMKEY_OFFSET))(this, i, paramKey);
		}

		::System::Void RegisterLODRefPoint(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint, ::System::Boolean forceComplete)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERLODREFPOINT_OFFSET))(this, refPoint, forceComplete);
		}

		::System::Void UnRegisterLODItem(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODITEM_OFFSET))(this, i);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid DelayUnRegisterLODRefPoint(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DELAYUNREGISTERLODREFPOINT_OFFSET))(this, refPoint);
		}

		::System::Void UnRegisterLODRefPoint(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* refPoint)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_UNREGISTERLODREFPOINT_OFFSET))(this, refPoint);
		}

		::System::Void RegisterDistancePair(::NPCCrowd::Lod::LODItem p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::LODItem, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_REGISTERDISTANCEPAIR_OFFSET))(this, p1, p2);
		}

		::System::Void DistanceCallback(::NPCCrowd::Lod::ConditionData conditionData, ::System::Boolean greater, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ConditionData, ::System::Boolean, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DISTANCECALLBACK_OFFSET))(this, conditionData, greater, p1, p2);
		}

		::System::Void WriteNativeDistanceLodIndex(::NPCCrowd::Lod::LODItem item)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::LODItem))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_WRITENATIVEDISTANCELODINDEX_OFFSET))(this, item);
		}

		static ::System::Boolean ShouldWriteNativeDistanceLodIndex()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_SHOULDWRITENATIVEDISTANCELODINDEX_OFFSET))();
		}

		static ::System::Int32 GetLODIndex(::NPCCrowd::Lod::LODItem item)
		{
			return ((::System::Int32(*)(::NPCCrowd::Lod::LODItem))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETLODINDEX_OFFSET))(item);
		}

		::System::Int32 GetLODIndex_1(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_GETLODINDEX_1_OFFSET))(this, i);
		}

		::System::Boolean TryGetLODIndex(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* i, ::System::Int32& lodIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_TRYGETLODINDEX_OFFSET))(this, i, lodIndex);
		}

		::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>* DictFromPool()
		{
			return ((::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTFROMPOOL_OFFSET))(this);
		}

		::System::Void DictToPool(::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>* dict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODINSTANCE_DICTTOPOOL_OFFSET))(this, dict);
		}
	};
}
