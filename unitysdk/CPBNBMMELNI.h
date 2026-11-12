#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define CPBNBMMELNI_BFLHCJHENCO_OFFSET UNITYSDK_OFFSET(0xE61AFC0)
#define CPBNBMMELNI_EMEOKNOKEIA_OFFSET UNITYSDK_OFFSET(0xE61AE10)
#define CPBNBMMELNI_FODPAIKIEAF_OFFSET UNITYSDK_OFFSET(0xE61B100)
#define CPBNBMMELNI_KIPNPEPNOCI_OFFSET UNITYSDK_OFFSET(0xE61B370)
#define CPBNBMMELNI_OBLHGFBLNNG_OFFSET UNITYSDK_OFFSET(0xE61B5E0)
#define CPBNBMMELNI_OECJIAILGJD_OFFSET UNITYSDK_OFFSET(0xE61B1F0)

inline static constexpr unsigned int CPBNBMMELNI_TypeDefinitionIndex = 79807;

	class CPBNBMMELNI : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 EMEOKNOKEIA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CPBNBMMELNI_EMEOKNOKEIA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 BFLHCJHENCO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CPBNBMMELNI_BFLHCJHENCO_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector3 FODPAIKIEAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CPBNBMMELNI_FODPAIKIEAF_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 OECJIAILGJD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CPBNBMMELNI_OECJIAILGJD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single KIPNPEPNOCI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CPBNBMMELNI_KIPNPEPNOCI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single OBLHGFBLNNG(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CPBNBMMELNI_OBLHGFBLNNG_OFFSET))(a1, a2, a3);
		}

	};
