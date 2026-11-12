#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCHDFGJBFPN.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KMPPPEBNIBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC2F40)
#define KMPPPEBNIBC_ISPOINTINSIDELOCAL_OFFSET UNITYSDK_OFFSET(0xBDC2E90)

inline static constexpr unsigned int KMPPPEBNIBC_TypeDefinitionIndex = 76101;

	class KMPPPEBNIBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPPPEBNIBC_CTOR_OFFSET))(this);
		}

		::System::Boolean IsPointInsideLocal(::UnityEngine::Vector3 a1, ::NCHDFGJBFPN a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::NCHDFGJBFPN))((::PBYTE)hIl2Cpp + KMPPPEBNIBC_ISPOINTINSIDELOCAL_OFFSET))(this, a1, a2);
		}

	};
