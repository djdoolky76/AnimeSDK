#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OHLGGCHBGJK_CTOR_OFFSET UNITYSDK_OFFSET(0x24AA0)
#define OHLGGCHBGJK_HJFFHBPCBNC_OFFSET UNITYSDK_OFFSET(0x24AC0)

inline static constexpr unsigned int OHLGGCHBGJK_TypeDefinitionIndex = 57007;

	struct alignas(4) OHLGGCHBGJK
	{
		::UnityEngine::Vector3 GNOKDJHJJAB; // 0x10
		::System::Single AIHGFMNOHFM; // 0x1C
		::System::Single OEPDJOIHCNJ; // 0x20
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OHLGGCHBGJK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HJFFHBPCBNC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OHLGGCHBGJK_HJFFHBPCBNC_OFFSET))(this, a1);
		}

	};
