#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define KJIMMLJEGMI_KINPAELKGMF_EIDHGNDIAHN_OFFSET UNITYSDK_OFFSET(0x78C270)
#define KJIMMLJEGMI_KINPAELKGMF_HMIGEEHGBDI_OFFSET UNITYSDK_OFFSET(0x78C1E0)

inline static constexpr unsigned int KJIMMLJEGMI_KINPAELKGMF_TypeDefinitionIndex = 86208;

struct alignas(4) KJIMMLJEGMI_KINPAELKGMF
{
	::UnityEngine::Vector2 KPIJGPJKBAI; // 0x10

	::UnityEngine::Vector2 HMIGEEHGBDI(::UnityEngine::Vector2& BJONOAOBOHG)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_KINPAELKGMF_HMIGEEHGBDI_OFFSET))(this, BJONOAOBOHG);
	}

	::UnityEngine::Vector2 EIDHGNDIAHN(::System::Single ADHLMCIBJCH, ::System::Single MLEGKGDLCPB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KJIMMLJEGMI_KINPAELKGMF_EIDHGNDIAHN_OFFSET))(this, ADHLMCIBJCH, MLEGKGDLCPB);
	}
};
