#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/JDMNPLMAKGE.h"

#define NCCLPHOILBE_IAJJEBBHMLP_CTOR_OFFSET UNITYSDK_OFFSET(0x150E98E0)
#define NCCLPHOILBE_IAJJEBBHMLP_EICNFKBNCKJ_OFFSET UNITYSDK_OFFSET(0x150EBB80)
#define NCCLPHOILBE_IAJJEBBHMLP_MBNOBHBIFMP_OFFSET UNITYSDK_OFFSET(0x150E9310)

inline static constexpr unsigned int NCCLPHOILBE_IAJJEBBHMLP_TypeDefinitionIndex = 73581;

	class NCCLPHOILBE_IAJJEBBHMLP : public ::System::Object
	{
	public:
		::System::Single OMJGOCKEIBK; // 0x10
		::UnityEngine::Vector2 MEDPKIEKODB; // 0x14
		::System::Single AICEGEHFLKM; // 0x1C
		::UnityEngine::Vector2 AFOOCLEPIIK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IAJJEBBHMLP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 MBNOBHBIFMP(::JDMNPLMAKGE a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IAJJEBBHMLP_MBNOBHBIFMP_OFFSET))(this, a1);
		}

		::System::Boolean EICNFKBNCKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCLPHOILBE_IAJJEBBHMLP_EICNFKBNCKJ_OFFSET))(this);
		}

	};
