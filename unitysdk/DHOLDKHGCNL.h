#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHOLDKHGCNL_LightMethod.h"
#include "unitysdk/DHOLDKHGCNL_LightParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class NFHMCNOBCMC;
namespace System { class String; }
namespace VLB { class VolumetricLightBeam; }

#define DHOLDKHGCNL_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0xEBE61D0)
#define DHOLDKHGCNL_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0xEBE6340)
#define DHOLDKHGCNL_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0xEBE60C0)
#define DHOLDKHGCNL_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0xEBE6550)
#define DHOLDKHGCNL_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0xEBE6500)
#define DHOLDKHGCNL_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0xEBE63F0)
#define DHOLDKHGCNL_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0xEBE6230)
#define DHOLDKHGCNL_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0xEBE6150)
#define DHOLDKHGCNL_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0xEBE6450)
#define DHOLDKHGCNL_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0xEBE62F0)
#define DHOLDKHGCNL_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0xEBE6100)
#define DHOLDKHGCNL_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0xEBE62A0)
#define DHOLDKHGCNL_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0xEBE6390)
#define DHOLDKHGCNL_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0xEBE64B0)

inline static constexpr unsigned int DHOLDKHGCNL_TypeDefinitionIndex = 47382;

	class DHOLDKHGCNL : public ::System::Object
	{
	public:
		static ::System::Boolean ENMPCKCBFJM(::DHOLDKHGCNL_LightParam a1)
		{
			return ((::System::Boolean(*)(::DHOLDKHGCNL_LightParam))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_ENMPCKCBFJM_OFFSET))(a1);
		}

		static ::System::Void NOEGGKLKAJB(::VLB::VolumetricLightBeam* a1, ::DHOLDKHGCNL_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::VLB::VolumetricLightBeam*, ::DHOLDKHGCNL_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_NOEGGKLKAJB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKKEANANHAB(::VLB::VolumetricLightBeam* a1, ::DHOLDKHGCNL_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::VLB::VolumetricLightBeam*, ::DHOLDKHGCNL_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_LKKEANANHAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AEJPDKGJDAA(::VLB::VolumetricLightBeam* a1, ::DHOLDKHGCNL_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::VLB::VolumetricLightBeam*, ::DHOLDKHGCNL_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_AEJPDKGJDAA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JNHJDMGOAIP(::VLB::VolumetricLightBeam* a1, ::DHOLDKHGCNL_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::VLB::VolumetricLightBeam*, ::DHOLDKHGCNL_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_JNHJDMGOAIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OBBAJHNOGCF(::VLB::VolumetricLightBeam* a1, ::DHOLDKHGCNL_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::VLB::VolumetricLightBeam*, ::DHOLDKHGCNL_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_OBBAJHNOGCF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NELNABBPDIF(::VLB::VolumetricLightBeam* a1, ::DHOLDKHGCNL_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::VLB::VolumetricLightBeam*, ::DHOLDKHGCNL_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_NELNABBPDIF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BFMOPDAOBOJ(::NFHMCNOBCMC* a1, ::DHOLDKHGCNL_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::NFHMCNOBCMC*, ::DHOLDKHGCNL_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_BFMOPDAOBOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PGOLCLMMANO(::NFHMCNOBCMC* a1, ::DHOLDKHGCNL_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::NFHMCNOBCMC*, ::DHOLDKHGCNL_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_PGOLCLMMANO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GPMMDDEHDFB(::NFHMCNOBCMC* a1, ::DHOLDKHGCNL_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::NFHMCNOBCMC*, ::DHOLDKHGCNL_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_GPMMDDEHDFB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MOFGJIFMEKF(::NFHMCNOBCMC* a1, ::DHOLDKHGCNL_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::NFHMCNOBCMC*, ::DHOLDKHGCNL_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_MOFGJIFMEKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLMIIKONDEO(::NFHMCNOBCMC* a1, ::DHOLDKHGCNL_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::NFHMCNOBCMC*, ::DHOLDKHGCNL_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_PLMIIKONDEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GFIBKAIBLLM(::NFHMCNOBCMC* a1, ::DHOLDKHGCNL_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::NFHMCNOBCMC*, ::DHOLDKHGCNL_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_GFIBKAIBLLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FHBABJGAINC(::DHOLDKHGCNL_LightMethod a1)
		{
			return ((::System::Boolean(*)(::DHOLDKHGCNL_LightMethod))((::PBYTE)hIl2Cpp + DHOLDKHGCNL_FHBABJGAINC_OFFSET))(a1);
		}

	};
