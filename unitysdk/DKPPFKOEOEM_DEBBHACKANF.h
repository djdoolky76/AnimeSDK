#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGOFNNDDEBO;

#define DKPPFKOEOEM_DEBBHACKANF_FBELOPCPAID_OFFSET UNITYSDK_OFFSET(0xFDC37B0)
#define DKPPFKOEOEM_DEBBHACKANF_GIECLAHHEHC_OFFSET UNITYSDK_OFFSET(0xFDC36B0)
#define DKPPFKOEOEM_DEBBHACKANF__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC36A0)

inline static constexpr unsigned int DKPPFKOEOEM_DEBBHACKANF_TypeDefinitionIndex = 53227;

class DKPPFKOEOEM_DEBBHACKANF : public ::System::Object
{
public:
	::NGOFNNDDEBO* IBIIFPDHIMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_DEBBHACKANF__CTOR_OFFSET))(this);
	}

	::System::Boolean GIECLAHHEHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_DEBBHACKANF_GIECLAHHEHC_OFFSET))(this);
	}

	::System::Boolean FBELOPCPAID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_DEBBHACKANF_FBELOPCPAID_OFFSET))(this);
	}
};
