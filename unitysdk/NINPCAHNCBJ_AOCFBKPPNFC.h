#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/JDMNPLMAKGE.h"

#define NINPCAHNCBJ_AOCFBKPPNFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC03E60)
#define NINPCAHNCBJ_AOCFBKPPNFC_EICNFKBNCKJ_OFFSET UNITYSDK_OFFSET(0xBC055A0)
#define NINPCAHNCBJ_AOCFBKPPNFC_MBNOBHBIFMP_OFFSET UNITYSDK_OFFSET(0xBC038D0)

inline static constexpr unsigned int NINPCAHNCBJ_AOCFBKPPNFC_TypeDefinitionIndex = 71721;

	class NINPCAHNCBJ_AOCFBKPPNFC : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 MEDPKIEKODB; // 0x10
		::System::Single AICEGEHFLKM; // 0x18
		::System::Single OMJGOCKEIBK; // 0x1C
		::UnityEngine::Vector2 AFOOCLEPIIK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_AOCFBKPPNFC_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 MBNOBHBIFMP(::JDMNPLMAKGE a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::JDMNPLMAKGE))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_AOCFBKPPNFC_MBNOBHBIFMP_OFFSET))(this, a1);
		}

		::System::Boolean EICNFKBNCKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPCAHNCBJ_AOCFBKPPNFC_EICNFKBNCKJ_OFFSET))(this);
		}

	};
