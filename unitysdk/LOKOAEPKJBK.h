#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::CustomRP { class StencilDelegate; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define LOKOAEPKJBK_AAHPBECDNGG_OFFSET UNITYSDK_OFFSET(0xB808530)
#define LOKOAEPKJBK_CNHJEJIMEIA_OFFSET UNITYSDK_OFFSET(0xB8081F0)
#define LOKOAEPKJBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8081A0)
#define LOKOAEPKJBK_DBEPJFAGLEI_OFFSET UNITYSDK_OFFSET(0xB809D50)
#define LOKOAEPKJBK_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xB8082D0)
#define LOKOAEPKJBK_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xB8083B0)
#define LOKOAEPKJBK_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB808190)
#define LOKOAEPKJBK_JNKMMPDCPKM_OFFSET UNITYSDK_OFFSET(0xB808230)
#define LOKOAEPKJBK_KFCEADPEOJB_OFFSET UNITYSDK_OFFSET(0xB808400)
#define LOKOAEPKJBK_KPCFDNNNKMG_OFFSET UNITYSDK_OFFSET(0xB808480)
#define LOKOAEPKJBK_MILCBAKOMHE_OFFSET UNITYSDK_OFFSET(0xB8081B0)
#define LOKOAEPKJBK_OILOMLEDFCC_OFFSET UNITYSDK_OFFSET(0xB808590)
#define LOKOAEPKJBK_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB80A1D0)
#define LOKOAEPKJBK_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xB80A3A0)
#define LOKOAEPKJBK_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB80A260)
#define LOKOAEPKJBK_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xB80A440)
#define LOKOAEPKJBK_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0xB809F20)
#define LOKOAEPKJBK_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xB808320)
#define LOKOAEPKJBK_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0xB808370)
#define LOKOAEPKJBK_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xB80A680)
#define LOKOAEPKJBK_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xB80A5F0)
#define LOKOAEPKJBK_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0xB809EA0)
#define LOKOAEPKJBK_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xB809FB0)
#define LOKOAEPKJBK_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB80A130)
#define LOKOAEPKJBK_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xB80A2F0)
#define LOKOAEPKJBK_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0xB80A4E0)
#define LOKOAEPKJBK_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0xB80A0B0)
#define LOKOAEPKJBK_ONTURNON_OFFSET UNITYSDK_OFFSET(0xB80A030)
#define LOKOAEPKJBK_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xB80A570)
#define LOKOAEPKJBK_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xB808280)
#define LOKOAEPKJBK_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xB8085F0)
#define LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_0_OFFSET UNITYSDK_OFFSET(0xB80A700)
#define LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_1_OFFSET UNITYSDK_OFFSET(0xB80A760)
#define LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_2_OFFSET UNITYSDK_OFFSET(0xB80A7B0)
#define LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_3_OFFSET UNITYSDK_OFFSET(0xB80A800)

	class LOKOAEPKJBK : public ::System::Object
	{
	public:
		::UnityEngine::Light* CFJMMAEBLIL; // 0x10
		::RPG::CustomRP::CustomAdditionalLightData* CPIIPEDINBM; // 0x18
		::RPG::CustomRP::CustomAdditionalLightData* CNPBIOHICOK; // 0x20
		::UnityEngine::Light* JHHJJBCFKGI; // 0x28
		::System::Boolean OINDCKEEHPF; // 0x30
		::System::Boolean KAIGPKAJOAM; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_lightTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_GET_LIGHTTRANSFORM_OFFSET))(this);
		}

		::System::Void MILCBAKOMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_MILCBAKOMHE_OFFSET))(this);
		}

		::System::Void CNHJEJIMEIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_CNHJEJIMEIA_OFFSET))(this);
		}

		::System::Void JNKMMPDCPKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_JNKMMPDCPKM_OFFSET))(this, a1);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_GETTYPEID_OFFSET))(this);
		}

		::UnityEngine::Mesh* KFCEADPEOJB()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_KFCEADPEOJB_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 KPCFDNNNKMG()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_KPCFDNNNKMG_OFFSET))(this);
		}

		::System::Void AAHPBECDNGG(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomAdditionalLightData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_AAHPBECDNGG_OFFSET))(this, a1, a2);
		}

		::System::Void OILOMLEDFCC(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomAdditionalLightData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_OILOMLEDFCC_OFFSET))(this, a1, a2);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void DBEPJFAGLEI(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::RPG::CustomRP::StencilDelegate* a2, ::System::String* a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::RPG::CustomRP::StencilDelegate*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_DBEPJFAGLEI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnTurnOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONTURNON_OFFSET))(this);
		}

		::System::Void OnTurnOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONTURNOFF_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOAEPKJBK_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void _UnserializeAsync_b__21_0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_0_OFFSET))(this, a1);
		}

		::System::Void _UnserializeAsync_b__21_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_1_OFFSET))(this, a1);
		}

		::System::Void _UnserializeAsync_b__21_2(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_2_OFFSET))(this, a1);
		}

		::System::Void _UnserializeAsync_b__21_3(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + LOKOAEPKJBK__UNSERIALIZEASYNC_B__21_3_OFFSET))(this, a1);
		}

	};
