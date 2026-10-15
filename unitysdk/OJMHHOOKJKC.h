#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define OJMHHOOKJKC_CPEIFCKCPEH_OFFSET UNITYSDK_OFFSET(0xBEC7CD0)
#define OJMHHOOKJKC_JDBFHECCPFF_OFFSET UNITYSDK_OFFSET(0xBEC7C30)
#define OJMHHOOKJKC_PMENEIBBMNA_OFFSET UNITYSDK_OFFSET(0xBEC7AE0)

inline static constexpr unsigned int OJMHHOOKJKC_TypeDefinitionIndex = 70175;

	class OJMHHOOKJKC : public ::System::Object
	{
	public:
		static ::System::Void PMENEIBBMNA(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + OJMHHOOKJKC_PMENEIBBMNA_OFFSET))(a1, a2);
		}

		static ::System::Boolean JDBFHECCPFF(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + OJMHHOOKJKC_JDBFHECCPFF_OFFSET))(a1);
		}

		static ::System::Void CPEIFCKCPEH(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + OJMHHOOKJKC_CPEIFCKCPEH_OFFSET))(a1);
		}

	};
