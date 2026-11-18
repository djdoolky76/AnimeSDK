#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/FNPCCrowdLodCommand.h"
#include "unitysdk/NPCCrowd/Lod/FNPCCrowdLodDecisionFragment.h"
#include "unitysdk/NPCCrowd/Lod/FNPCCrowdLodFragment.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodNativeChannel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"

class COCJHGGDBCA;
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_ALLOCATEARRAYS_OFFSET UNITYSDK_OFFSET(0xB2F2E20)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xB2F2BF0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CLEARDECISIONCOMMANDS_OFFSET UNITYSDK_OFFSET(0xB2F3570)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CLEARRUNTIMEDATADIRTY_OFFSET UNITYSDK_OFFSET(0xB2F34E0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CLEARSLOT_OFFSET UNITYSDK_OFFSET(0xB2F3250)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_COLLECTDIRTYRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0xB2F3840)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_COPYSLOT_OFFSET UNITYSDK_OFFSET(0xB2F31A0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CREATEDEFAULTLODFRAGMENT_OFFSET UNITYSDK_OFFSET(0xB2F3460)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2F2C60)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xB2F2BD0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_INVALIDATEDISTANCELODINDICES_OFFSET UNITYSDK_OFFSET(0xB2F3A20)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_ISVALIDARRAYINDEX_OFFSET UNITYSDK_OFFSET(0xB2F3400)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_MARKALLRUNTIMEDATADIRTY_OFFSET UNITYSDK_OFFSET(0xB2F3750)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_MARKRUNTIMEDATADIRTY_OFFSET UNITYSDK_OFFSET(0xB2F3690)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_RESIZE_OFFSET UNITYSDK_OFFSET(0xB2F2FB0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETCURRENTLOD_OFFSET UNITYSDK_OFFSET(0xB2F3BB0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETDISTANCELODINDEX_OFFSET UNITYSDK_OFFSET(0xB2DD270)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETINACTIVE_OFFSET UNITYSDK_OFFSET(0xB2F3B10)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETNEXTLOD_OFFSET UNITYSDK_OFFSET(0xB2F3C50)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETPHYSICSLOD_OFFSET UNITYSDK_OFFSET(0xB2F3CF0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0xB2F2BE0)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA_WRITEINPUT_OFFSET UNITYSDK_OFFSET(0xB2F3D90)
#define NPCCROWD_LOD_NPCCROWDNATIVELODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F3EF0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdNativeLodData_TypeDefinitionIndex = 49110;

	class NPCCrowdNativeLodData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::NPCCrowd::Lod::NPCCrowdLodRuntimeData*>* _dirtyRuntimeDataSet; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Lod::FNPCCrowdLodFragment> LodFragments; // 0x18
		::System::Byte _padding0[0x8];
		::System::Int32 _Capacity_k__BackingField; // 0x28
		::System::Byte _padding1[0x4];
		::Unity::Collections::NativeQueue_1<::NPCCrowd::Lod::FNPCCrowdLodCommand> DecisionCommands; // 0x30
		::System::Byte _padding2[0x10];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Lod::FNPCCrowdLodDecisionFragment> DecisionOutputs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Void Allocate(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_ALLOCATE_OFFSET))(this, capacity);
		}

		::System::Void Resize(::System::Int32 newCapacity, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_RESIZE_OFFSET))(this, newCapacity, count);
		}

		::System::Void CopySlot(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_COPYSLOT_OFFSET))(this, src, dst);
		}

		::System::Void ClearSlot(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CLEARSLOT_OFFSET))(this, index);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearDecisionCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CLEARDECISIONCOMMANDS_OFFSET))(this);
		}

		::System::Void MarkRuntimeDataDirty(::NPCCrowd::Lod::NPCCrowdLodRuntimeData* runtimeData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodRuntimeData*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_MARKRUNTIMEDATADIRTY_OFFSET))(this, runtimeData);
		}

		::System::Void MarkAllRuntimeDataDirty(::System::Collections::Generic::List_1<::COCJHGGDBCA*>* npcComponents, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COCJHGGDBCA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_MARKALLRUNTIMEDATADIRTY_OFFSET))(this, npcComponents, count);
		}

		::System::Void CollectDirtyRuntimeData(::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdLodRuntimeData*>* dirtyRuntimeData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Lod::NPCCrowdLodRuntimeData*>*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_COLLECTDIRTYRUNTIMEDATA_OFFSET))(this, dirtyRuntimeData);
		}

		::System::Void ClearRuntimeDataDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CLEARRUNTIMEDATADIRTY_OFFSET))(this);
		}

		::System::Void SetDistanceLodIndex(::System::Int32 crowdIndex, ::NPCCrowd::Lod::NPCCrowdLodNativeChannel channel, ::System::Int32 lodIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Lod::NPCCrowdLodNativeChannel, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETDISTANCELODINDEX_OFFSET))(this, crowdIndex, channel, lodIndex);
		}

		::System::Void InvalidateDistanceLodIndices(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_INVALIDATEDISTANCELODINDICES_OFFSET))(this, count);
		}

		::System::Void SetInactive(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETINACTIVE_OFFSET))(this, index);
		}

		::System::Void SetCurrentLod(::System::Int32 index, ::System::Int32 currentLod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETCURRENTLOD_OFFSET))(this, index, currentLod);
		}

		::System::Void SetNextLod(::System::Int32 index, ::System::Int32 nextLod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETNEXTLOD_OFFSET))(this, index, nextLod);
		}

		::System::Void SetPhysicsLod(::System::Int32 index, ::System::Int32 physicsLod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_SETPHYSICSLOD_OFFSET))(this, index, physicsLod);
		}

		::System::Void WriteInput(::System::Int32 index, ::System::Boolean lodSystemEnabled, ::System::Int32 visualDistanceLodIndex, ::System::Int32 physicsDistanceLodIndex, ::System::Int32 currentLod, ::System::Int32 nextLod, ::System::Int32 forceLod, ::System::Int32 physicsLod, ::System::Boolean overrideHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_WRITEINPUT_OFFSET))(this, index, lodSystemEnabled, visualDistanceLodIndex, physicsDistanceLodIndex, currentLod, nextLod, forceLod, physicsLod, overrideHide);
		}

		::System::Void AllocateArrays(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_ALLOCATEARRAYS_OFFSET))(this, capacity);
		}

		::System::Boolean IsValidArrayIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_ISVALIDARRAYINDEX_OFFSET))(this, index);
		}

		static ::NPCCrowd::Lod::FNPCCrowdLodFragment CreateDefaultLodFragment()
		{
			return ((::NPCCrowd::Lod::FNPCCrowdLodFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDNATIVELODDATA_CREATEDEFAULTLODFRAGMENT_OFFSET))();
		}
	};
}
