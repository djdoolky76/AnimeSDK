#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define JBLCKECLODH_CTOR_OFFSET UNITYSDK_OFFSET(0x16571B40)
#define JBLCKECLODH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16571A20)

inline static constexpr unsigned int JBLCKECLODH_TypeDefinitionIndex = 68599;

	class JBLCKECLODH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLCKECLODH_CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion Evaluate(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JBLCKECLODH_EVALUATE_OFFSET))(this, a1);
		}

	};
