#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPBatch/MaterialBatchJobItem.h"
#include "unitysdk/UnityEngine/NAPBatch/MaterialBatchWriter.h"

#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F0238F0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREAD_OFFSET UNITYSDK_OFFSET(0x1F023AB0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1F0238C0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1F0238D0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F0239E0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F023930)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F0239B0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_SYNCJOBSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F0238E0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_WRITEPROPERTYTOMATERIALTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F023900)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_WRITEPROPERTYTOMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F023AC0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F023910)

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int MaterialBatchApplier_TypeDefinitionIndex = 6142;

	class MaterialBatchApplier : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void SyncJobsInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_SYNCJOBSINTERNAL_OFFSET))(this);
		}

		static ::System::Void ApplyItemThreadInternal(::UnityEngine::NAPBatch::MaterialBatchJobItem& item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchJobItem&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREADINTERNAL_OFFSET))(item, threadSafeCall);
		}

		static ::System::Void WritePropertyToMaterialThreadInternal(::UnityEngine::NAPBatch::MaterialBatchWriter& item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchWriter&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_WRITEPROPERTYTOMATERIALTHREADINTERNAL_OFFSET))(item, threadSafeCall);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_FINALIZE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_RELEASE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DISPOSE_OFFSET))(this);
		}

		static ::System::Void ApplyItemThread(::UnityEngine::NAPBatch::MaterialBatchJobItem& item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchJobItem&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREAD_OFFSET))(item, threadSafeCall);
		}

		static ::System::Void WritePropertyToMaterial(::UnityEngine::NAPBatch::MaterialBatchWriter& item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchWriter&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_WRITEPROPERTYTOMATERIAL_OFFSET))(item, threadSafeCall);
		}
	};
}
