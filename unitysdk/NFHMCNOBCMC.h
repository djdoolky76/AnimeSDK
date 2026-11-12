#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADKLKMMEEHH.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Bounds.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Object; }
namespace VLB { class VolumetricLightBeam; }

#define NFHMCNOBCMC_BICAHCDNMKI_OFFSET UNITYSDK_OFFSET(0xC46DBF0)
#define NFHMCNOBCMC_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC46E030)
#define NFHMCNOBCMC_CTOR_OFFSET UNITYSDK_OFFSET(0xC46E330)
#define NFHMCNOBCMC_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xC46D4B0)
#define NFHMCNOBCMC_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xC46D9E0)
#define NFHMCNOBCMC_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xC46E0F0)
#define NFHMCNOBCMC_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xC46E280)
#define NFHMCNOBCMC_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xC46DC40)
#define NFHMCNOBCMC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC46DA80)
#define NFHMCNOBCMC_LNGICFIGNDM_OFFSET UNITYSDK_OFFSET(0xC46D920)
#define NFHMCNOBCMC_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC46DDC0)
#define NFHMCNOBCMC_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xC46DF20)
#define NFHMCNOBCMC_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xC46DD00)
#define NFHMCNOBCMC_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xC46D880)
#define NFHMCNOBCMC_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xC46D7A0)
#define NFHMCNOBCMC_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xC46D960)
#define NFHMCNOBCMC_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC46DE10)
#define NFHMCNOBCMC_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xC46DFF0)
#define NFHMCNOBCMC_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xC46DA30)
#define NFHMCNOBCMC_TICK_OFFSET UNITYSDK_OFFSET(0xC46E080)
#define NFHMCNOBCMC_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xC46D500)
#define NFHMCNOBCMC__UNSERIALIZEASYNC_B__3_0_OFFSET UNITYSDK_OFFSET(0xC46E340)

inline static constexpr unsigned int NFHMCNOBCMC_TypeDefinitionIndex = 50084;

	class NFHMCNOBCMC : public ::ADKLKMMEEHH
	{
	public:
		::VLB::VolumetricLightBeam* HINIKDOHFHL; // 0x48
		::System::Boolean ABAJPCBKJBH; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single JCKDMLAKAAM; // 0x54
		::System::Single IKECGNGBDCA; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::VLB::VolumetricLightBeam* LNGICFIGNDM()
		{
			return ((::VLB::VolumetricLightBeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_LNGICFIGNDM_OFFSET))(this);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_GETTYPEID_OFFSET))(this);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void BICAHCDNMKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_BICAHCDNMKI_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_GET_ARTBOUND_OFFSET))(this);
		}

		::System::Void _UnserializeAsync_b__3_0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NFHMCNOBCMC__UNSERIALIZEASYNC_B__3_0_OFFSET))(this, a1);
		}

	};
