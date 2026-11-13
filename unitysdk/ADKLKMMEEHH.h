#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace UnityEngine { class Transform; }

#define ADKLKMMEEHH_CNHJEJIMEIA_OFFSET UNITYSDK_OFFSET(0x182B2240)
#define ADKLKMMEEHH_CTOR_OFFSET UNITYSDK_OFFSET(0x182B22D0)
#define ADKLKMMEEHH_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x182B1C70)
#define ADKLKMMEEHH_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x182B1BC0)
#define ADKLKMMEEHH_JNKMMPDCPKM_OFFSET UNITYSDK_OFFSET(0x182B2280)
#define ADKLKMMEEHH_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x182B1F50)
#define ADKLKMMEEHH_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x182B2060)
#define ADKLKMMEEHH_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x182B1FA0)
#define ADKLKMMEEHH_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x182B20C0)
#define ADKLKMMEEHH_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x182B1D90)
#define ADKLKMMEEHH_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x182B1CC0)
#define ADKLKMMEEHH_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x182B1D10)
#define ADKLKMMEEHH_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x182B2200)
#define ADKLKMMEEHH_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x182B21B0)
#define ADKLKMMEEHH_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0x182B1D50)
#define ADKLKMMEEHH_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x182B1DE0)
#define ADKLKMMEEHH_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x182B1EF0)
#define ADKLKMMEEHH_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x182B1FF0)
#define ADKLKMMEEHH_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x182B2120)
#define ADKLKMMEEHH_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0x182B1EB0)
#define ADKLKMMEEHH_ONTURNON_OFFSET UNITYSDK_OFFSET(0x182B1E70)
#define ADKLKMMEEHH_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0x182B2170)
#define ADKLKMMEEHH_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0x182B1E20)

inline static constexpr unsigned int ADKLKMMEEHH_TypeDefinitionIndex = 50147;

	class ADKLKMMEEHH : public ::RPG::Client::TABehaviorBase
	{
	public:
		::MEIGMBOLDOF* IMEKHJOPMDI; // 0x38
		::System::Boolean KAIGPKAJOAM; // 0x40
		::System::Boolean OINDCKEEHPF; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_lightTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_GET_LIGHTTRANSFORM_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONOBJECTDESTROY_OFFSET))(this);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONRELEASE_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnTurnOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONTURNON_OFFSET))(this);
		}

		::System::Void OnTurnOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONTURNOFF_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void CNHJEJIMEIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_CNHJEJIMEIA_OFFSET))(this);
		}

		::System::Void JNKMMPDCPKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADKLKMMEEHH_JNKMMPDCPKM_OFFSET))(this, a1);
		}

	};
