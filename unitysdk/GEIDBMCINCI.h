#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define GEIDBMCINCI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15F16B70)
#define GEIDBMCINCI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x776080)
#define GEIDBMCINCI_PEABAPPBKAD_OFFSET UNITYSDK_OFFSET(0x7760C0)

inline static constexpr unsigned int GEIDBMCINCI_TypeDefinitionIndex = 52838;

struct alignas(4) GEIDBMCINCI
{
	::System::Int32 LLFKOOKDOLP; // 0x10
	::System::Int32 OGJBEBAGJJJ; // 0x14
	::System::Int32 JFEEEOJCHJG; // 0x18

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDBMCINCI_DISPOSE_OFFSET))(this);
	}

	::System::Boolean PEABAPPBKAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDBMCINCI_PEABAPPBKAD_OFFSET))(this);
	}

	/*
	static ::GEIDBMCINCI COKNIICCODC(::System::Int32 IMFFCLHHPOD, ::System::Int32 IIDKBMFGAOL, ::System::Int32 FGLCGNPDMMN)
	{
		return ((::GEIDBMCINCI(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GEIDBMCINCI_COKNIICCODC_OFFSET))(IMFFCLHHPOD, IIDKBMFGAOL, FGLCGNPDMMN);
	}
	*/
};
