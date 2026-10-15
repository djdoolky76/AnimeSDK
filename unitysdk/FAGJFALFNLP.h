#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FAGJFALFNLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1566EFB0)
#define FAGJFALFNLP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1566EE50)

inline static constexpr unsigned int FAGJFALFNLP_TypeDefinitionIndex = 68598;

	class FAGJFALFNLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGJFALFNLP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Evaluate(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FAGJFALFNLP_EVALUATE_OFFSET))(this, a1);
		}

	};
