#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFHOPECDEFA_ABBLFCLEPOP.h"
#include "unitysdk/AFHOPECDEFA_EInputEvaluatorType.h"
#include "unitysdk/UnityEngine/Vector2.h"
class AFHOPECDEFA;

#define AFHOPECDEFA_FJHCGFAGKJL_CKPEDHOPLBA_OFFSET UNITYSDK_OFFSET(0xCF0C910)
#define AFHOPECDEFA_FJHCGFAGKJL_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0C900)
#define AFHOPECDEFA_FJHCGFAGKJL_FAKGMKIPMIK_OFFSET UNITYSDK_OFFSET(0xCF0C950)
#define AFHOPECDEFA_FJHCGFAGKJL_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xCF0C990)
#define AFHOPECDEFA_FJHCGFAGKJL_GKFFLOEBBHO_OFFSET UNITYSDK_OFFSET(0xCF0C9E0)

inline static constexpr unsigned int AFHOPECDEFA_FJHCGFAGKJL_TypeDefinitionIndex = 61326;

	class AFHOPECDEFA_FJHCGFAGKJL : public ::AFHOPECDEFA_ABBLFCLEPOP
	{
	public:
		::System::Void _ctor(::AFHOPECDEFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFHOPECDEFA*))((::PBYTE)hIl2Cpp + AFHOPECDEFA_FJHCGFAGKJL_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 CKPEDHOPLBA()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_FJHCGFAGKJL_CKPEDHOPLBA_OFFSET))(this);
		}

		::System::Void FAKGMKIPMIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_FJHCGFAGKJL_FAKGMKIPMIK_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM(::AFHOPECDEFA_EInputEvaluatorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFHOPECDEFA_EInputEvaluatorType))((::PBYTE)hIl2Cpp + AFHOPECDEFA_FJHCGFAGKJL_GGNBOEIMEPM_OFFSET))(this, a1);
		}

		::AFHOPECDEFA_EInputEvaluatorType GKFFLOEBBHO()
		{
			return ((::AFHOPECDEFA_EInputEvaluatorType(*)(::PVOID))((::PBYTE)hIl2Cpp + AFHOPECDEFA_FJHCGFAGKJL_GKFFLOEBBHO_OFFSET))(this);
		}

	};
