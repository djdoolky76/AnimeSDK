#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/NFCGKHPFMBA.h"

#define BCEICFKFIIO_JILAMEKNCMB_OFFSET UNITYSDK_OFFSET(0x1EC16FF0)
#define BCEICFKFIIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC16FE0)

inline static constexpr unsigned int BCEICFKFIIO_TypeDefinitionIndex = 95234;

class BCEICFKFIIO : public ::CGGLJLECNJM
{
public:
	::System::UInt32 JCEJDIHGDEA; // 0x20
	::System::Int32 DALJDJDLHEA; // 0x24
	::System::UInt32 MGMDLMBEDJF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEICFKFIIO__CTOR_OFFSET))(this);
	}

	::NFCGKHPFMBA JILAMEKNCMB()
	{
		return ((::NFCGKHPFMBA(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEICFKFIIO_JILAMEKNCMB_OFFSET))(this);
	}
};
