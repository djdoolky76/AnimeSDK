#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMPIJJGMNPD_LightMethod.h"
#include "unitysdk/LMPIJJGMNPD_LightParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class IDBHLOCKPJL;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace System { class String; }
namespace UnityEngine { class Light; }

#define LMPIJJGMNPD_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0xB7CD330)
#define LMPIJJGMNPD_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0xB7CD4F0)
#define LMPIJJGMNPD_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0xB7CD1F0)
#define LMPIJJGMNPD_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0xB7CD700)
#define LMPIJJGMNPD_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0xB7CD6B0)
#define LMPIJJGMNPD_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0xB7CD5A0)
#define LMPIJJGMNPD_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0xB7CD390)
#define LMPIJJGMNPD_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0xB7CD290)
#define LMPIJJGMNPD_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0xB7CD600)
#define LMPIJJGMNPD_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0xB7CD490)
#define LMPIJJGMNPD_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0xB7CD230)
#define LMPIJJGMNPD_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0xB7CD430)
#define LMPIJJGMNPD_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0xB7CD540)
#define LMPIJJGMNPD_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0xB7CD660)

inline static constexpr unsigned int LMPIJJGMNPD_TypeDefinitionIndex = 47366;

	class LMPIJJGMNPD : public ::System::Object
	{
	public:
		static ::System::Boolean ENMPCKCBFJM(::LMPIJJGMNPD_LightParam a1)
		{
			return ((::System::Boolean(*)(::LMPIJJGMNPD_LightParam))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_ENMPCKCBFJM_OFFSET))(a1);
		}

		static ::System::Void NOEGGKLKAJB(::RPG::CustomRP::CustomAdditionalLightData* a1, ::UnityEngine::Light* a2, ::LMPIJJGMNPD_LightParam a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*, ::LMPIJJGMNPD_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_NOEGGKLKAJB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LKKEANANHAB(::RPG::CustomRP::CustomAdditionalLightData* a1, ::UnityEngine::Light* a2, ::LMPIJJGMNPD_LightParam a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*, ::LMPIJJGMNPD_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_LKKEANANHAB_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AEJPDKGJDAA(::RPG::CustomRP::CustomAdditionalLightData* a1, ::UnityEngine::Light* a2, ::LMPIJJGMNPD_LightParam a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*, ::LMPIJJGMNPD_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_AEJPDKGJDAA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JNHJDMGOAIP(::RPG::CustomRP::CustomAdditionalLightData* a1, ::UnityEngine::Light* a2, ::LMPIJJGMNPD_LightParam a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*, ::LMPIJJGMNPD_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_JNHJDMGOAIP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OBBAJHNOGCF(::RPG::CustomRP::CustomAdditionalLightData* a1, ::UnityEngine::Light* a2, ::LMPIJJGMNPD_LightParam a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*, ::LMPIJJGMNPD_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_OBBAJHNOGCF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NELNABBPDIF(::RPG::CustomRP::CustomAdditionalLightData* a1, ::UnityEngine::Light* a2, ::LMPIJJGMNPD_LightParam a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*, ::LMPIJJGMNPD_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_NELNABBPDIF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BFMOPDAOBOJ(::IDBHLOCKPJL* a1, ::LMPIJJGMNPD_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::IDBHLOCKPJL*, ::LMPIJJGMNPD_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_BFMOPDAOBOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PGOLCLMMANO(::IDBHLOCKPJL* a1, ::LMPIJJGMNPD_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::IDBHLOCKPJL*, ::LMPIJJGMNPD_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_PGOLCLMMANO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GPMMDDEHDFB(::IDBHLOCKPJL* a1, ::LMPIJJGMNPD_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::IDBHLOCKPJL*, ::LMPIJJGMNPD_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_GPMMDDEHDFB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MOFGJIFMEKF(::IDBHLOCKPJL* a1, ::LMPIJJGMNPD_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::IDBHLOCKPJL*, ::LMPIJJGMNPD_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_MOFGJIFMEKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLMIIKONDEO(::IDBHLOCKPJL* a1, ::LMPIJJGMNPD_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::IDBHLOCKPJL*, ::LMPIJJGMNPD_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_PLMIIKONDEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GFIBKAIBLLM(::IDBHLOCKPJL* a1, ::LMPIJJGMNPD_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::IDBHLOCKPJL*, ::LMPIJJGMNPD_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_GFIBKAIBLLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FHBABJGAINC(::LMPIJJGMNPD_LightMethod a1)
		{
			return ((::System::Boolean(*)(::LMPIJJGMNPD_LightMethod))((::PBYTE)hIl2Cpp + LMPIJJGMNPD_FHBABJGAINC_OFFSET))(a1);
		}

	};
