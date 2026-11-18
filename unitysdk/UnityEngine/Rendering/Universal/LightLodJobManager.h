#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DelayChangeLight.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLODChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobManager_CalculateNapLodJob.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightLodConfigData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GLFBAHGPEFO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1D28CAF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET UNITYSDK_OFFSET(0x1D28DC60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CLEARNULLDATA_OFFSET UNITYSDK_OFFSET(0x1D28D350)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDLIGHTLODCHANGE_OFFSET UNITYSDK_OFFSET(0x1D28C690)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADD_OFFSET UNITYSDK_OFFSET(0x1D28C5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYREMOVE_OFFSET UNITYSDK_OFFSET(0x1D28C620)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0x1D28D7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D28C2C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET UNITYSDK_OFFSET(0x1D28DD60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET UNITYSDK_OFFSET(0x1D28DF50)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1D28DB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET UNITYSDK_OFFSET(0x1D28D520)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETSELFPOSITION_OFFSET UNITYSDK_OFFSET(0x1D28D5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0x1D28C030)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET UNITYSDK_OFFSET(0x1D28D3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D28C100)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1D28C720)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATAAT_OFFSET UNITYSDK_OFFSET(0x1D28D0E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET UNITYSDK_OFFSET(0x1D28CF40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D28C270)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_UPDATECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1D28D640)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D28E3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28C0F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_TypeDefinitionIndex = 26295;

	class LightLodJobManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightLodJobManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobManager**)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x239B0);
		}
		static ::UnityEngine::Rendering::Universal::LightLodJobData* StaticGet_dummy()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobData*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5BD0);
		}
		static ::System::Boolean* StaticGet__needMainThreadFlush()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5BDC);
		}
		static ::System::Boolean* StaticGet_enableUpdateLightLodJob()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5BDD);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Int32>* _entityIndexMap; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DelayChangeLight>* _delayChangeLights; // 0x18
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData configData; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _lightData; // 0x48
		::Unity::Collections::ManagedBlockQueue_1<::UnityEngine::Rendering::Universal::LightLODChange>* _lightLODChangeQueue; // 0x50
		::GLFBAHGPEFO* _transformSnapshot; // 0x58
		::System::Int32 _lodUpdateStartIndex; // 0x60
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::Universal::LightLodJobManager_CalculateNapLodJob _calculateNapLodJob; // 0x68
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> _lightJobData; // 0x80
		::System::Byte _padding1[0x8];
		::Unity::Jobs::JobHandle _jobHandle; // 0x90
		::System::Int32 frameCount; // 0xA0
		::System::Boolean _needRefreshNull; // 0xA4
		::System::Boolean _needRefresh; // 0xA5
		::System::Boolean _isInit; // 0xA6
		::System::Byte _padding2[0x1];
		::UnityEngine::Vector3 triggerPosition; // 0xA8
		::System::Boolean _hasValidConfigData; // 0xB4
		::System::Boolean isApplicationPlaying; // 0xB5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::LightLodJobManager* get_Ins()
		{
			return ((::UnityEngine::Rendering::Universal::LightLodJobManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GET_INS_OFFSET))();
		}

		::System::Void SetSnapshot(::GLFBAHGPEFO* transformSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::GLFBAHGPEFO*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETSNAPSHOT_OFFSET))(this, transformSnapshot);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DelayAdd(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADD_OFFSET))(this, lightData);
		}

		::System::Void DelayRemove(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYREMOVE_OFFSET))(this, lightData);
		}

		::System::Void DelayAddLightLODChange(::UnityEngine::Rendering::Universal::LightLODChange lodChange)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LightLODChange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDLIGHTLODCHANGE_OFFSET))(this, lodChange);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET))(this);
		}

		::System::Void AddJobData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET))(this, lightData);
		}

		::System::Void ClearNullData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CLEARNULLDATA_OFFSET))(this);
		}

		::System::Void RemoveJobData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET))(this, lightData);
		}

		::System::Void RemoveJobDataAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATAAT_OFFSET))(this, index);
		}

		::System::Boolean IsLightDataValidTheadSafe(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET))(this, index);
		}

		::UnityEngine::Light* GetLight(::System::Int32 index)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetSelfPosition(::System::Int32 transformId)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETSELFPOSITION_OFFSET))(this, transformId);
		}

		::System::Void UpdateConfigData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_UPDATECONFIGDATA_OFFSET))(this, data);
		}

		::System::Void DispatchJob(::Unity::Jobs::JobHandle jobHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET))(this, jobHandle);
		}

		::System::Void FlushDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATACHANGE_OFFSET))(this);
		}

		::System::Void BeginJob(::Unity::Jobs::JobHandle dependency)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET))(this, dependency);
		}

		::System::Void EndJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET))(this);
		}

		::System::Void FinishMainThreadWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET))(this);
		}
	};
}
