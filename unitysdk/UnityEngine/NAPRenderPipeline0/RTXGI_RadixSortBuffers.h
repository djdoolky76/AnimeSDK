#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DATANUM_OFFSET UNITYSDK_OFFSET(0x1EDAC580)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHARGS_OFFSET UNITYSDK_OFFSET(0x1EDAC620)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHIDX_OFFSET UNITYSDK_OFFSET(0x1EDAC5E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_GROUPSUMS_OFFSET UNITYSDK_OFFSET(0x1EDAC5C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SCANGROUPPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1EDAC600)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SWAPDATA_OFFSET UNITYSDK_OFFSET(0x1EDAC5A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_INIT_OFFSET UNITYSDK_OFFSET(0x1EDAC230)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EDAB770)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DATANUM_OFFSET UNITYSDK_OFFSET(0x1EDAC590)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHARGS_OFFSET UNITYSDK_OFFSET(0x1EDAC630)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHIDX_OFFSET UNITYSDK_OFFSET(0x1EDAC5F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_GROUPSUMS_OFFSET UNITYSDK_OFFSET(0x1EDAC5D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SCANGROUPPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1EDAC610)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SWAPDATA_OFFSET UNITYSDK_OFFSET(0x1EDAC5B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SWAPDATA_OFFSET UNITYSDK_OFFSET(0x1EDAC640)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDAC570)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI_RadixSortBuffers_TypeDefinitionIndex = 5805;

	class RTXGI_RadixSortBuffers : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* _dataNum_k__BackingField; // 0x10
		::UnityEngine::ComputeBuffer* _swapData_k__BackingField; // 0x18
		::UnityEngine::ComputeBuffer* _groupSums_k__BackingField; // 0x20
		::UnityEngine::ComputeBuffer* _dispatchIdx_k__BackingField; // 0x28
		::UnityEngine::ComputeBuffer* _scanGroupPayload_k__BackingField; // 0x30
		::UnityEngine::ComputeBuffer* _dispatchArgs_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS__CTOR_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_dataNum()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DATANUM_OFFSET))(this);
		}

		::System::Void set_dataNum(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DATANUM_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_swapData()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SWAPDATA_OFFSET))(this);
		}

		::System::Void set_swapData(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SWAPDATA_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_groupSums()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_GROUPSUMS_OFFSET))(this);
		}

		::System::Void set_groupSums(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_GROUPSUMS_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_dispatchIdx()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHIDX_OFFSET))(this);
		}

		::System::Void set_dispatchIdx(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHIDX_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_scanGroupPayload()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SCANGROUPPAYLOAD_OFFSET))(this);
		}

		::System::Void set_scanGroupPayload(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SCANGROUPPAYLOAD_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_dispatchArgs()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHARGS_OFFSET))(this);
		}

		::System::Void set_dispatchArgs(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHARGS_OFFSET))(this, value);
		}

		::System::Void Init(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_INIT_OFFSET))(this, num);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_RELEASE_OFFSET))(this);
		}

		::System::Void SwapData(::UnityEngine::ComputeBuffer*& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SWAPDATA_OFFSET))(this, data);
		}
	};
}
