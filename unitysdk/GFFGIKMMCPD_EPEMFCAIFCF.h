#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GFFGIKMMCPD_EPEMFCAIFCF_MHHJBEFANLI_OFFSET UNITYSDK_OFFSET(0x116F2D20)
#define GFFGIKMMCPD_EPEMFCAIFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x116F2D00)

inline static constexpr unsigned int GFFGIKMMCPD_EPEMFCAIFCF_TypeDefinitionIndex = 50449;

class GFFGIKMMCPD_EPEMFCAIFCF : public ::System::Object
{
public:
	::System::String* FOGAJGPIBMN; // 0x10
	::System::String* CBPPJLDKGJJ; // 0x18
	::System::Int32 IFGMFALNKOH; // 0x20

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_EPEMFCAIFCF__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void MHHJBEFANLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_EPEMFCAIFCF_MHHJBEFANLI_OFFSET))(this);
	}
};
