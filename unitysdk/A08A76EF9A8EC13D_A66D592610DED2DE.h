#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A08A76EF9A8EC13D_A66D592610DED2DE_AF9A3F5A04BFCCE7_OFFSET UNITYSDK_OFFSET(0x19D9F80)
#define A08A76EF9A8EC13D_A66D592610DED2DE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A08A76EF9A8EC13D_A66D592610DED2DE_TypeDefinitionIndex = 1713;

class A08A76EF9A8EC13D_A66D592610DED2DE : public ::System::Object
{
public:
	::UnityEngine::Vector3 A58DEFD8203E295C; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A08A76EF9A8EC13D_A66D592610DED2DE__CTOR_OFFSET))(this);
	}

	::System::Int32 AF9A3F5A04BFCCE7(::UnityEngine::Vector3 BB8C609F76620E45, ::UnityEngine::Vector3 A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A08A76EF9A8EC13D_A66D592610DED2DE_AF9A3F5A04BFCCE7_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
