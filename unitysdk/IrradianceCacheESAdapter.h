#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VoxelIrradianceCacheProxyMode.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace RPG::Client { class IAssetOperation; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class VoxelIrradianceCache; }
namespace UnityEngine { class VoxelIrradianceCacheData; }

#define IRRADIANCECACHEESADAPTER_CHECKVOXELIRRADIANCECACHE_OFFSET UNITYSDK_OFFSET(0x16538430)
#define IRRADIANCECACHEESADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x16538C90)
#define IRRADIANCECACHEESADAPTER_DISABLEVIC_OFFSET UNITYSDK_OFFSET(0x16537C50)
#define IRRADIANCECACHEESADAPTER_ENABLEVIC_OFFSET UNITYSDK_OFFSET(0x165380D0)
#define IRRADIANCECACHEESADAPTER_FHINGOKGDBC_OFFSET UNITYSDK_OFFSET(0x165384C0)
#define IRRADIANCECACHEESADAPTER_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x16537FE0)
#define IRRADIANCECACHEESADAPTER_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x16537EB0)
#define IRRADIANCECACHEESADAPTER_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x16538390)
#define IRRADIANCECACHEESADAPTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16538BB0)
#define IRRADIANCECACHEESADAPTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x165389B0)
#define IRRADIANCECACHEESADAPTER_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x165383E0)
#define IRRADIANCECACHEESADAPTER_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x16537F50)
#define IRRADIANCECACHEESADAPTER_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x16537DC0)
#define IRRADIANCECACHEESADAPTER_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x16537E10)
#define IRRADIANCECACHEESADAPTER_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x16538080)
#define IRRADIANCECACHEESADAPTER_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x16538030)
#define IRRADIANCECACHEESADAPTER_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x16537F00)
#define IRRADIANCECACHEESADAPTER_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x16537C00)
#define IRRADIANCECACHEESADAPTER_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x16538300)
#define IRRADIANCECACHEESADAPTER_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x16537FA0)
#define IRRADIANCECACHEESADAPTER_PFDBEDIFLHG_OFFSET UNITYSDK_OFFSET(0x16538750)
#define IRRADIANCECACHEESADAPTER_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x16537E60)
#define IRRADIANCECACHEESADAPTER_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x16537B40)

inline static constexpr unsigned int IrradianceCacheESAdapter_TypeDefinitionIndex = 47317;

	class IrradianceCacheESAdapter : public ::ScenenLightManager::SceneManagedLightComponent1
	{
	public:
		::UnityEngine::VoxelIrradianceCache* KGBIEADAEJG; // 0x28
		::UnityEngine::VoxelIrradianceCacheData* NDHIALHJPCK; // 0x30
		::UnityEngine::Mesh* GEAMIDMPIAA; // 0x38
		::System::String* OONEMIPDIAF; // 0x40
		::System::String* MBAPAJOHHJE; // 0x48
		::UnityEngine::Vector3 MAKKHCLEMBG; // 0x50
		::UnityEngine::VoxelIrradianceCacheProxyMode PNODNPMCNCK; // 0x5C
		::System::Single LFEAJEGHEBH; // 0x60
		::System::Single GKAFBPONEEP; // 0x64
		::System::Boolean EJKPPAGBOEN; // 0x68
		::System::Byte _padding0[0x7];
		::RPG::Client::IAssetOperation* HKKNPDJKFON; // 0x70
		::RPG::Client::IAssetOperation* CPMCAFELJGP; // 0x78
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x80
		::System::Int32 LightQualityVersion; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_CTOR_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_GETTYPEID_OFFSET))(this);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void CheckVoxelIrradianceCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_CHECKVOXELIRRADIANCECACHE_OFFSET))(this);
		}

		::System::Boolean FHINGOKGDBC(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_FHINGOKGDBC_OFFSET))(this, a1);
		}

		::System::Boolean PFDBEDIFLHG(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_PFDBEDIFLHG_OFFSET))(this, a1);
		}

		::System::Void EnableVIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ENABLEVIC_OFFSET))(this);
		}

		::System::Void DisableVIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_DISABLEVIC_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRRADIANCECACHEESADAPTER_ONDISABLE_OFFSET))(this);
		}

	};
