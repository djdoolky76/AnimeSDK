#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEB15D0F6A26C506_F16640C7A7FF8A7F.h"
#include "unitysdk/System/ValueType.h"

#define BECC51C8AC27D797_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3F43FE0)

inline static constexpr unsigned int BECC51C8AC27D797_TypeDefinitionIndex = 20550;

struct alignas(8) BECC51C8AC27D797
{
	::PVOID B0699A5C353D6853; // 0x10
	::PVOID B16DBA003C139025; // 0x18
	::FEB15D0F6A26C506_F16640C7A7FF8A7F FEEAB22B933EF1AB; // 0x20

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECC51C8AC27D797_E8AF1E0387A100FA_OFFSET))(this);
	}
};
