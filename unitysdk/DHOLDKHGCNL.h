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

#define DHOLDKHGCNL_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0xEBEC5B0)
#define DHOLDKHGCNL_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0xEBEC720)
#define DHOLDKHGCNL_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0xEBEC4A0)
#define DHOLDKHGCNL_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0xEBEC930)
#define DHOLDKHGCNL_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0xEBEC8E0)
#define DHOLDKHGCNL_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0xEBEC7D0)
#define DHOLDKHGCNL_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0xEBEC610)
#define DHOLDKHGCNL_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0xEBEC530)
#define DHOLDKHGCNL_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0xEBEC830)
#define DHOLDKHGCNL_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0xEBEC6D0)
#define DHOLDKHGCNL_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0xEBEC4E0)
#define DHOLDKHGCNL_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0xEBEC680)
#define DHOLDKHGCNL_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0xEBEC770)
#define DHOLDKHGCNL_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0xEBEC890)

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
