#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define A3DEBBADEEE86CF7_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F40AD0)

inline static constexpr unsigned int A3DEBBADEEE86CF7_TypeDefinitionIndex = 20549;

struct alignas(8) A3DEBBADEEE86CF7
{
	::PVOID BEEFA17B8679304A; // 0x10

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3DEBBADEEE86CF7_E8AF1E0387A100FA_OFFSET))(this);
	}
};
