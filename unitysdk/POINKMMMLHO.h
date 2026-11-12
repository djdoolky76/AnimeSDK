#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/POINKMMMLHO_LightMethod.h"
#include "unitysdk/POINKMMMLHO_LightParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class GPFEAEOEGFA;
namespace RPG::Client { class BillboardController; }
namespace System { class String; }

#define POINKMMMLHO_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0xCC9F810)
#define POINKMMMLHO_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0xCC9F980)
#define POINKMMMLHO_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0xCC9F720)
#define POINKMMMLHO_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0xCC9FB90)
#define POINKMMMLHO_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0xCC9FB40)
#define POINKMMMLHO_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0xCC9FA30)
#define POINKMMMLHO_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0xCC9F870)
#define POINKMMMLHO_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0xCC9F7B0)
#define POINKMMMLHO_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0xCC9FA90)
#define POINKMMMLHO_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0xCC9F930)
#define POINKMMMLHO_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0xCC9F760)
#define POINKMMMLHO_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0xCC9F8E0)
#define POINKMMMLHO_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0xCC9F9D0)
#define POINKMMMLHO_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0xCC9FAF0)

inline static constexpr unsigned int POINKMMMLHO_TypeDefinitionIndex = 48385;

	class POINKMMMLHO : public ::System::Object
	{
	public:
		static ::System::Boolean ENMPCKCBFJM(::POINKMMMLHO_LightParam a1)
		{
			return ((::System::Boolean(*)(::POINKMMMLHO_LightParam))((::PBYTE)hIl2Cpp + POINKMMMLHO_ENMPCKCBFJM_OFFSET))(a1);
		}

		static ::System::Void NOEGGKLKAJB(::RPG::Client::BillboardController* a1, ::POINKMMMLHO_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*, ::POINKMMMLHO_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + POINKMMMLHO_NOEGGKLKAJB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKKEANANHAB(::RPG::Client::BillboardController* a1, ::POINKMMMLHO_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*, ::POINKMMMLHO_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + POINKMMMLHO_LKKEANANHAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AEJPDKGJDAA(::RPG::Client::BillboardController* a1, ::POINKMMMLHO_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*, ::POINKMMMLHO_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + POINKMMMLHO_AEJPDKGJDAA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JNHJDMGOAIP(::RPG::Client::BillboardController* a1, ::POINKMMMLHO_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*, ::POINKMMMLHO_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + POINKMMMLHO_JNHJDMGOAIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OBBAJHNOGCF(::RPG::Client::BillboardController* a1, ::POINKMMMLHO_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*, ::POINKMMMLHO_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + POINKMMMLHO_OBBAJHNOGCF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NELNABBPDIF(::RPG::Client::BillboardController* a1, ::POINKMMMLHO_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::BillboardController*, ::POINKMMMLHO_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + POINKMMMLHO_NELNABBPDIF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BFMOPDAOBOJ(::GPFEAEOEGFA* a1, ::POINKMMMLHO_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::GPFEAEOEGFA*, ::POINKMMMLHO_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + POINKMMMLHO_BFMOPDAOBOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PGOLCLMMANO(::GPFEAEOEGFA* a1, ::POINKMMMLHO_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::GPFEAEOEGFA*, ::POINKMMMLHO_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + POINKMMMLHO_PGOLCLMMANO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GPMMDDEHDFB(::GPFEAEOEGFA* a1, ::POINKMMMLHO_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::GPFEAEOEGFA*, ::POINKMMMLHO_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + POINKMMMLHO_GPMMDDEHDFB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MOFGJIFMEKF(::GPFEAEOEGFA* a1, ::POINKMMMLHO_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::GPFEAEOEGFA*, ::POINKMMMLHO_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + POINKMMMLHO_MOFGJIFMEKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLMIIKONDEO(::GPFEAEOEGFA* a1, ::POINKMMMLHO_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::GPFEAEOEGFA*, ::POINKMMMLHO_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + POINKMMMLHO_PLMIIKONDEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GFIBKAIBLLM(::GPFEAEOEGFA* a1, ::POINKMMMLHO_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::GPFEAEOEGFA*, ::POINKMMMLHO_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + POINKMMMLHO_GFIBKAIBLLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FHBABJGAINC(::POINKMMMLHO_LightMethod a1)
		{
			return ((::System::Boolean(*)(::POINKMMMLHO_LightMethod))((::PBYTE)hIl2Cpp + POINKMMMLHO_FHBABJGAINC_OFFSET))(a1);
		}

	};
