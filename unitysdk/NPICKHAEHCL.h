#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace UnityEngine { class Transform; }

#define NPICKHAEHCL_CNHJEJIMEIA_OFFSET UNITYSDK_OFFSET(0xBCF77E0)
#define NPICKHAEHCL_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7870)
#define NPICKHAEHCL_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xBCF7370)
#define NPICKHAEHCL_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xBCF72C0)
#define NPICKHAEHCL_JNKMMPDCPKM_OFFSET UNITYSDK_OFFSET(0xBCF7820)
#define NPICKHAEHCL_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xBCF74F0)
#define NPICKHAEHCL_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xBCF7600)
#define NPICKHAEHCL_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xBCF7540)
#define NPICKHAEHCL_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xBCF7660)
#define NPICKHAEHCL_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xBCF77A0)
#define NPICKHAEHCL_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xBCF7750)
#define NPICKHAEHCL_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xBCF7490)
#define NPICKHAEHCL_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xBCF7590)
#define NPICKHAEHCL_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0xBCF76C0)
#define NPICKHAEHCL_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0xBCF7450)
#define NPICKHAEHCL_ONTURNON_OFFSET UNITYSDK_OFFSET(0xBCF7410)
#define NPICKHAEHCL_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xBCF7710)
#define NPICKHAEHCL_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xBCF73C0)

inline static constexpr unsigned int NPICKHAEHCL_TypeDefinitionIndex = 49073;

	class NPICKHAEHCL : public ::System::Object
	{
	public:
		::MEIGMBOLDOF* IMEKHJOPMDI; // 0x10
		::System::Boolean OINDCKEEHPF; // 0x18
		::System::Boolean KAIGPKAJOAM; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_lightTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_GET_LIGHTTRANSFORM_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + NPICKHAEHCL_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnTurnOn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONTURNON_OFFSET))(this);
		}

		::System::Void OnTurnOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONTURNOFF_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSetSceneLightLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Void CNHJEJIMEIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPICKHAEHCL_CNHJEJIMEIA_OFFSET))(this);
		}

		::System::Void JNKMMPDCPKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPICKHAEHCL_JNKMMPDCPKM_OFFSET))(this, a1);
		}

	};
