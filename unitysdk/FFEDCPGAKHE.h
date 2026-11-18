#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FFEDCPGAKHE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xBB3AAE0)
#define FFEDCPGAKHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4AFDB0)
#define FFEDCPGAKHE_PEABAPPBKAD_OFFSET UNITYSDK_OFFSET(0x4AFDF0)

inline static constexpr unsigned int FFEDCPGAKHE_TypeDefinitionIndex = 65399;

struct alignas(4) FFEDCPGAKHE
{
	::System::Int32 LLFKOOKDOLP; // 0x10
	::System::Int32 OGJBEBAGJJJ; // 0x14
	::System::Int32 JFEEEOJCHJG; // 0x18

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEDCPGAKHE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean PEABAPPBKAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEDCPGAKHE_PEABAPPBKAD_OFFSET))(this);
	}

	/*
	static ::FFEDCPGAKHE COKNIICCODC(::System::Int32 IMFFCLHHPOD, ::System::Int32 IIDKBMFGAOL, ::System::Int32 FGLCGNPDMMN)
	{
		return ((::FFEDCPGAKHE(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FFEDCPGAKHE_COKNIICCODC_OFFSET))(IMFFCLHHPOD, IIDKBMFGAOL, FGLCGNPDMMN);
	}
	*/
};
