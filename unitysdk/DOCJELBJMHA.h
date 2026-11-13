#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOCJELBJMHA_LightMethod.h"
#include "unitysdk/DOCJELBJMHA_LightParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class KPDABHOKLNM;
namespace RPG::Client { class LineGlowLightMonoPlugin; }
namespace System { class String; }

#define DOCJELBJMHA_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0x1919D5E0)
#define DOCJELBJMHA_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0x1919D750)
#define DOCJELBJMHA_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0x1919D4E0)
#define DOCJELBJMHA_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0x1919D960)
#define DOCJELBJMHA_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0x1919D910)
#define DOCJELBJMHA_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0x1919D800)
#define DOCJELBJMHA_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0x1919D640)
#define DOCJELBJMHA_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0x1919D570)
#define DOCJELBJMHA_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0x1919D860)
#define DOCJELBJMHA_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0x1919D700)
#define DOCJELBJMHA_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0x1919D520)
#define DOCJELBJMHA_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0x1919D6B0)
#define DOCJELBJMHA_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0x1919D7A0)
#define DOCJELBJMHA_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0x1919D8C0)

inline static constexpr unsigned int DOCJELBJMHA_TypeDefinitionIndex = 48401;

	class DOCJELBJMHA : public ::System::Object
	{
	public:
		static ::System::Boolean ENMPCKCBFJM(::DOCJELBJMHA_LightParam a1)
		{
			return ((::System::Boolean(*)(::DOCJELBJMHA_LightParam))((::PBYTE)hIl2Cpp + DOCJELBJMHA_ENMPCKCBFJM_OFFSET))(a1);
		}

		static ::System::Void NOEGGKLKAJB(::RPG::Client::LineGlowLightMonoPlugin* a1, ::DOCJELBJMHA_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LineGlowLightMonoPlugin*, ::DOCJELBJMHA_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + DOCJELBJMHA_NOEGGKLKAJB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKKEANANHAB(::RPG::Client::LineGlowLightMonoPlugin* a1, ::DOCJELBJMHA_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::Client::LineGlowLightMonoPlugin*, ::DOCJELBJMHA_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + DOCJELBJMHA_LKKEANANHAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AEJPDKGJDAA(::RPG::Client::LineGlowLightMonoPlugin* a1, ::DOCJELBJMHA_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::RPG::Client::LineGlowLightMonoPlugin*, ::DOCJELBJMHA_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DOCJELBJMHA_AEJPDKGJDAA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JNHJDMGOAIP(::RPG::Client::LineGlowLightMonoPlugin* a1, ::DOCJELBJMHA_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::RPG::Client::LineGlowLightMonoPlugin*, ::DOCJELBJMHA_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DOCJELBJMHA_JNHJDMGOAIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OBBAJHNOGCF(::RPG::Client::LineGlowLightMonoPlugin* a1, ::DOCJELBJMHA_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::LineGlowLightMonoPlugin*, ::DOCJELBJMHA_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + DOCJELBJMHA_OBBAJHNOGCF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NELNABBPDIF(::RPG::Client::LineGlowLightMonoPlugin* a1, ::DOCJELBJMHA_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::LineGlowLightMonoPlugin*, ::DOCJELBJMHA_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + DOCJELBJMHA_NELNABBPDIF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BFMOPDAOBOJ(::KPDABHOKLNM* a1, ::DOCJELBJMHA_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::KPDABHOKLNM*, ::DOCJELBJMHA_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + DOCJELBJMHA_BFMOPDAOBOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PGOLCLMMANO(::KPDABHOKLNM* a1, ::DOCJELBJMHA_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::KPDABHOKLNM*, ::DOCJELBJMHA_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + DOCJELBJMHA_PGOLCLMMANO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GPMMDDEHDFB(::KPDABHOKLNM* a1, ::DOCJELBJMHA_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::KPDABHOKLNM*, ::DOCJELBJMHA_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DOCJELBJMHA_GPMMDDEHDFB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MOFGJIFMEKF(::KPDABHOKLNM* a1, ::DOCJELBJMHA_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::KPDABHOKLNM*, ::DOCJELBJMHA_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DOCJELBJMHA_MOFGJIFMEKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLMIIKONDEO(::KPDABHOKLNM* a1, ::DOCJELBJMHA_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::KPDABHOKLNM*, ::DOCJELBJMHA_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + DOCJELBJMHA_PLMIIKONDEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GFIBKAIBLLM(::KPDABHOKLNM* a1, ::DOCJELBJMHA_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::KPDABHOKLNM*, ::DOCJELBJMHA_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + DOCJELBJMHA_GFIBKAIBLLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FHBABJGAINC(::DOCJELBJMHA_LightMethod a1)
		{
			return ((::System::Boolean(*)(::DOCJELBJMHA_LightMethod))((::PBYTE)hIl2Cpp + DOCJELBJMHA_FHBABJGAINC_OFFSET))(a1);
		}

	};
