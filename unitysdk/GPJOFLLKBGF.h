#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace RPG::CustomRP { class CRPProbe; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Transform; }

#define GPJOFLLKBGF_BECMLOGHGOJ_OFFSET UNITYSDK_OFFSET(0x15B4FD20)
#define GPJOFLLKBGF_CNHJEJIMEIA_OFFSET UNITYSDK_OFFSET(0x15B4F980)
#define GPJOFLLKBGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B4F970)
#define GPJOFLLKBGF_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x15B4FB40)
#define GPJOFLLKBGF_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x15B4FAA0)
#define GPJOFLLKBGF_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x15B4F920)
#define GPJOFLLKBGF_JNKMMPDCPKM_OFFSET UNITYSDK_OFFSET(0x15B4F9C0)
#define GPJOFLLKBGF_KFCEADPEOJB_OFFSET UNITYSDK_OFFSET(0x15B4FB90)
#define GPJOFLLKBGF_KPCFDNNNKMG_OFFSET UNITYSDK_OFFSET(0x15B4FC10)
#define GPJOFLLKBGF_MILCBAKOMHE_OFFSET UNITYSDK_OFFSET(0x15B4F930)
#define GPJOFLLKBGF_NLIIEIAKNAN_OFFSET UNITYSDK_OFFSET(0x15B4FCC0)
#define GPJOFLLKBGF_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15B504B0)
#define GPJOFLLKBGF_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15B50680)
#define GPJOFLLKBGF_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15B50540)
#define GPJOFLLKBGF_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15B50720)
#define GPJOFLLKBGF_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x15B50200)
#define GPJOFLLKBGF_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x15B4FA50)
#define GPJOFLLKBGF_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x15B4FA10)
#define GPJOFLLKBGF_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x15B50960)
#define GPJOFLLKBGF_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15B508D0)
#define GPJOFLLKBGF_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x15B50180)
#define GPJOFLLKBGF_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x15B50290)
#define GPJOFLLKBGF_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x15B50410)
#define GPJOFLLKBGF_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x15B505D0)
#define GPJOFLLKBGF_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x15B507C0)
#define GPJOFLLKBGF_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0x15B50390)
#define GPJOFLLKBGF_ONTURNON_OFFSET UNITYSDK_OFFSET(0x15B50310)
#define GPJOFLLKBGF_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x15B50850)
#define GPJOFLLKBGF_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x15B4FAF0)
#define GPJOFLLKBGF_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x15B4FD80)
#define GPJOFLLKBGF__UNSERIALIZEASYNC_B__21_0_OFFSET UNITYSDK_OFFSET(0x15B509E0)
#define GPJOFLLKBGF__UNSERIALIZEASYNC_B__21_1_OFFSET UNITYSDK_OFFSET(0x15B50A40)

inline static constexpr unsigned int GPJOFLLKBGF_TypeDefinitionIndex = 49077;

	class GPJOFLLKBGF : public ::System::Object
	{
	public:
		::UnityEngine::ReflectionProbe* DFDGGMEIICL; // 0x10
		::RPG::CustomRP::CRPProbe* BHNADPMKCDF; // 0x18
		::UnityEngine::ReflectionProbe* FMKHAJEINDH; // 0x20
		::RPG::CustomRP::CRPProbe* GMIOPBAGHNN; // 0x28
		::System::Boolean OINDCKEEHPF; // 0x30
		::System::Boolean KAIGPKAJOAM; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_lightTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_GET_LIGHTTRANSFORM_OFFSET))(this);
		}

		::System::Void MILCBAKOMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_MILCBAKOMHE_OFFSET))(this);
		}

		::System::Void CNHJEJIMEIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_CNHJEJIMEIA_OFFSET))(this);
		}

		::System::Void JNKMMPDCPKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_JNKMMPDCPKM_OFFSET))(this, a1);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_GETTYPEID_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_GETQUALITYFILTER_OFFSET))(this);
		}

		::UnityEngine::Mesh* KFCEADPEOJB()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_KFCEADPEOJB_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 KPCFDNNNKMG()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_KPCFDNNNKMG_OFFSET))(this);
		}

		::System::Void NLIIEIAKNAN(::UnityEngine::ReflectionProbe* a1, ::RPG::CustomRP::CRPProbe* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ReflectionProbe*, ::RPG::CustomRP::CRPProbe*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_NLIIEIAKNAN_OFFSET))(this, a1, a2);
		}

		::System::Void BECMLOGHGOJ(::UnityEngine::ReflectionProbe* a1, ::RPG::CustomRP::CRPProbe* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ReflectionProbe*, ::RPG::CustomRP::CRPProbe*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_BECMLOGHGOJ_OFFSET))(this, a1, a2);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnTurnOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONTURNON_OFFSET))(this);
		}

		::System::Void OnTurnOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONTURNOFF_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJOFLLKBGF_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void _UnserializeAsync_b__21_0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF__UNSERIALIZEASYNC_B__21_0_OFFSET))(this, a1);
		}

		::System::Void _UnserializeAsync_b__21_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GPJOFLLKBGF__UNSERIALIZEASYNC_B__21_1_OFFSET))(this, a1);
		}

	};
