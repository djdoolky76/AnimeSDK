#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNEFPHADEHA_LightMethod.h"
#include "unitysdk/KNEFPHADEHA_LightParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class LocalFogSphereInstance;
namespace System { class Object; }
namespace System { class String; }

#define KNEFPHADEHA_AEJPDKGJDAA_OFFSET UNITYSDK_OFFSET(0xB57AC50)
#define KNEFPHADEHA_BFMOPDAOBOJ_OFFSET UNITYSDK_OFFSET(0xB57ADB0)
#define KNEFPHADEHA_ENMPCKCBFJM_OFFSET UNITYSDK_OFFSET(0xB57AB60)
#define KNEFPHADEHA_FHBABJGAINC_OFFSET UNITYSDK_OFFSET(0xB57AFF0)
#define KNEFPHADEHA_GFIBKAIBLLM_OFFSET UNITYSDK_OFFSET(0xB57AFA0)
#define KNEFPHADEHA_GPMMDDEHDFB_OFFSET UNITYSDK_OFFSET(0xB57AE80)
#define KNEFPHADEHA_JNHJDMGOAIP_OFFSET UNITYSDK_OFFSET(0xB57ACB0)
#define KNEFPHADEHA_LKKEANANHAB_OFFSET UNITYSDK_OFFSET(0xB57ABF0)
#define KNEFPHADEHA_MOFGJIFMEKF_OFFSET UNITYSDK_OFFSET(0xB57AEE0)
#define KNEFPHADEHA_NELNABBPDIF_OFFSET UNITYSDK_OFFSET(0xB57AD60)
#define KNEFPHADEHA_NOEGGKLKAJB_OFFSET UNITYSDK_OFFSET(0xB57ABA0)
#define KNEFPHADEHA_OBBAJHNOGCF_OFFSET UNITYSDK_OFFSET(0xB57AD10)
#define KNEFPHADEHA_PGOLCLMMANO_OFFSET UNITYSDK_OFFSET(0xB57AE00)
#define KNEFPHADEHA_PLMIIKONDEO_OFFSET UNITYSDK_OFFSET(0xB57AF50)

inline static constexpr unsigned int KNEFPHADEHA_TypeDefinitionIndex = 47377;

	class KNEFPHADEHA : public ::System::Object
	{
	public:
		static ::System::Boolean ENMPCKCBFJM(::KNEFPHADEHA_LightParam a1)
		{
			return ((::System::Boolean(*)(::KNEFPHADEHA_LightParam))((::PBYTE)hIl2Cpp + KNEFPHADEHA_ENMPCKCBFJM_OFFSET))(a1);
		}

		static ::System::Void NOEGGKLKAJB(::System::Object* a1, ::KNEFPHADEHA_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::KNEFPHADEHA_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + KNEFPHADEHA_NOEGGKLKAJB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKKEANANHAB(::System::Object* a1, ::KNEFPHADEHA_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Object*, ::KNEFPHADEHA_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + KNEFPHADEHA_LKKEANANHAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AEJPDKGJDAA(::System::Object* a1, ::KNEFPHADEHA_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::KNEFPHADEHA_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + KNEFPHADEHA_AEJPDKGJDAA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JNHJDMGOAIP(::System::Object* a1, ::KNEFPHADEHA_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::System::Object*, ::KNEFPHADEHA_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KNEFPHADEHA_JNHJDMGOAIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OBBAJHNOGCF(::System::Object* a1, ::KNEFPHADEHA_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::KNEFPHADEHA_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + KNEFPHADEHA_OBBAJHNOGCF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NELNABBPDIF(::System::Object* a1, ::KNEFPHADEHA_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Object*, ::KNEFPHADEHA_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + KNEFPHADEHA_NELNABBPDIF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BFMOPDAOBOJ(::LocalFogSphereInstance* a1, ::KNEFPHADEHA_LightParam a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::LocalFogSphereInstance*, ::KNEFPHADEHA_LightParam, ::System::String*))((::PBYTE)hIl2Cpp + KNEFPHADEHA_BFMOPDAOBOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PGOLCLMMANO(::LocalFogSphereInstance* a1, ::KNEFPHADEHA_LightParam a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::LocalFogSphereInstance*, ::KNEFPHADEHA_LightParam, ::System::Single))((::PBYTE)hIl2Cpp + KNEFPHADEHA_PGOLCLMMANO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GPMMDDEHDFB(::LocalFogSphereInstance* a1, ::KNEFPHADEHA_LightParam a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::LocalFogSphereInstance*, ::KNEFPHADEHA_LightParam, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + KNEFPHADEHA_GPMMDDEHDFB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MOFGJIFMEKF(::LocalFogSphereInstance* a1, ::KNEFPHADEHA_LightParam a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::LocalFogSphereInstance*, ::KNEFPHADEHA_LightParam, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KNEFPHADEHA_MOFGJIFMEKF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLMIIKONDEO(::LocalFogSphereInstance* a1, ::KNEFPHADEHA_LightParam a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::LocalFogSphereInstance*, ::KNEFPHADEHA_LightParam, ::System::Int32))((::PBYTE)hIl2Cpp + KNEFPHADEHA_PLMIIKONDEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GFIBKAIBLLM(::LocalFogSphereInstance* a1, ::KNEFPHADEHA_LightParam a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::LocalFogSphereInstance*, ::KNEFPHADEHA_LightParam, ::System::Boolean))((::PBYTE)hIl2Cpp + KNEFPHADEHA_GFIBKAIBLLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FHBABJGAINC(::KNEFPHADEHA_LightMethod a1)
		{
			return ((::System::Boolean(*)(::KNEFPHADEHA_LightMethod))((::PBYTE)hIl2Cpp + KNEFPHADEHA_FHBABJGAINC_OFFSET))(a1);
		}

	};
