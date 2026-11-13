#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MNLHJMMEHEI_NNKHNDEBHDA;

#define MNLHJMMEHEI_BJKEBDNCLOP_BMCCIKMFBDC_OFFSET UNITYSDK_OFFSET(0x1B1FCDD0)
#define MNLHJMMEHEI_BJKEBDNCLOP_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B1FCED0)
#define MNLHJMMEHEI_BJKEBDNCLOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F9710)

inline static constexpr unsigned int MNLHJMMEHEI_BJKEBDNCLOP_TypeDefinitionIndex = 58228;

	class MNLHJMMEHEI_BJKEBDNCLOP : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 NMCEJEMABHC; // 0x10
		::UnityEngine::Vector3 KGLAHHOFKLC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_BJKEBDNCLOP_CTOR_OFFSET))(this);
		}

		::System::Void BMCCIKMFBDC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_BJKEBDNCLOP_BMCCIKMFBDC_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::MNLHJMMEHEI_NNKHNDEBHDA* a1, ::MNLHJMMEHEI_NNKHNDEBHDA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_BJKEBDNCLOP_COMPARE_OFFSET))(this, a1, a2);
		}

	};
