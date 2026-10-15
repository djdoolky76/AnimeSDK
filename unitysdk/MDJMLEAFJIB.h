#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDJMLEAFJIB_LightMethod.h"
#include "unitysdk/MDJMLEAFJIB_LightParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class PPEHOFBJEHE;
namespace RPG::Client { class EasyFog; }
namespace System { class String; }

#define MDJMLEAFJIB_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0xB8A5BB0)
#define MDJMLEAFJIB_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0xB8A5D20)
#define MDJMLEAFJIB_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0xB8A5AB0)
#define MDJMLEAFJIB_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0xB8A5F30)
#define MDJMLEAFJIB_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0xB8A5EE0)
#define MDJMLEAFJIB_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0xB8A5DD0)
#define MDJMLEAFJIB_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0xB8A5C10)
#define MDJMLEAFJIB_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0xB8A5B40)
#define MDJMLEAFJIB_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0xB8A5E30)
#define MDJMLEAFJIB_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0xB8A5CD0)
#define MDJMLEAFJIB_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0xB8A5AF0)
#define MDJMLEAFJIB_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0xB8A5C80)
#define MDJMLEAFJIB_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0xB8A5D70)
#define MDJMLEAFJIB_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0xB8A5E90)

inline static constexpr unsigned int MDJMLEAFJIB_TypeDefinitionIndex = 47361;

	class MDJMLEAFJIB : public ::System::Object
	{
	public:
		static ::System::Boolean ENMPCKCBFJM(::MDJMLEAFJIB_LightParam a1)
		{
			return ((::System::Boolean(*)(::MDJMLEAFJIB_LightParam))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_ENMPCKCBFJM_OFFSET))(a1);
		}

		static ::System::Void NOEGGKLKAJB(::RPG::Client::EasyFog* a1, ::MDJMLEAFJIB_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::Client::EasyFog*, ::MDJMLEAFJIB_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_NOEGGKLKAJB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKKEANANHAB(::RPG::Client::EasyFog* a1, ::MDJMLEAFJIB_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::Client::EasyFog*, ::MDJMLEAFJIB_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_LKKEANANHAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AEJPDKGJDAA(::RPG::Client::EasyFog* a1, ::MDJMLEAFJIB_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::RPG::Client::EasyFog*, ::MDJMLEAFJIB_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_AEJPDKGJDAA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JNHJDMGOAIP(::RPG::Client::EasyFog* a1, ::MDJMLEAFJIB_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::RPG::Client::EasyFog*, ::MDJMLEAFJIB_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_JNHJDMGOAIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OBBAJHNOGCF(::RPG::Client::EasyFog* a1, ::MDJMLEAFJIB_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::EasyFog*, ::MDJMLEAFJIB_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_OBBAJHNOGCF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NELNABBPDIF(::RPG::Client::EasyFog* a1, ::MDJMLEAFJIB_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::EasyFog*, ::MDJMLEAFJIB_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_NELNABBPDIF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BFMOPDAOBOJ(::PPEHOFBJEHE* a1, ::MDJMLEAFJIB_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PPEHOFBJEHE*, ::MDJMLEAFJIB_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_BFMOPDAOBOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PGOLCLMMANO(::PPEHOFBJEHE* a1, ::MDJMLEAFJIB_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PPEHOFBJEHE*, ::MDJMLEAFJIB_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_PGOLCLMMANO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GPMMDDEHDFB(::PPEHOFBJEHE* a1, ::MDJMLEAFJIB_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PPEHOFBJEHE*, ::MDJMLEAFJIB_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_GPMMDDEHDFB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MOFGJIFMEKF(::PPEHOFBJEHE* a1, ::MDJMLEAFJIB_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PPEHOFBJEHE*, ::MDJMLEAFJIB_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_MOFGJIFMEKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLMIIKONDEO(::PPEHOFBJEHE* a1, ::MDJMLEAFJIB_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PPEHOFBJEHE*, ::MDJMLEAFJIB_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_PLMIIKONDEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GFIBKAIBLLM(::PPEHOFBJEHE* a1, ::MDJMLEAFJIB_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PPEHOFBJEHE*, ::MDJMLEAFJIB_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_GFIBKAIBLLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FHBABJGAINC(::MDJMLEAFJIB_LightMethod a1)
		{
			return ((::System::Boolean(*)(::MDJMLEAFJIB_LightMethod))((::PBYTE)hIl2Cpp + MDJMLEAFJIB_FHBABJGAINC_OFFSET))(a1);
		}

	};
