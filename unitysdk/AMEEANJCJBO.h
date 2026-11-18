#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGCGIAHBMKE.h"

#define AMEEANJCJBO_AJOFHEIPPMA_OFFSET UNITYSDK_OFFSET(0x1648D7D0)
#define AMEEANJCJBO_GMMJPBEINIH_OFFSET UNITYSDK_OFFSET(0x1648D460)
#define AMEEANJCJBO_HADGJFMJELC_OFFSET UNITYSDK_OFFSET(0x1648D700)
#define AMEEANJCJBO_LBMALCEMPPL_OFFSET UNITYSDK_OFFSET(0x1648D7C0)
#define AMEEANJCJBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1648D760)

inline static constexpr unsigned int AMEEANJCJBO_TypeDefinitionIndex = 82089;

class AMEEANJCJBO : public ::EGCGIAHBMKE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEANJCJBO__CTOR_OFFSET))(this);
	}

	::System::Void GMMJPBEINIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEANJCJBO_GMMJPBEINIH_OFFSET))(this);
	}

	::System::Void HADGJFMJELC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEANJCJBO_HADGJFMJELC_OFFSET))(this);
	}

	::System::Void LBMALCEMPPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEANJCJBO_LBMALCEMPPL_OFFSET))(this);
	}

	::System::Void AJOFHEIPPMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEEANJCJBO_AJOFHEIPPMA_OFFSET))(this);
	}
};
