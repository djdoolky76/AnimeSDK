#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMDAIKOHCAE.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IKOIKKCBNJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5811D0)

inline static constexpr unsigned int IKOIKKCBNJA_TypeDefinitionIndex = 75458;

	class IKOIKKCBNJA : public ::JMDAIKOHCAE
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IKOIKKCBNJA_CTOR_OFFSET))(this, a1, a2);
		}

	};
