#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FNELGPNBDEO_AOCBHDJJJGI_LEDGJFJCEPI_OFFSET UNITYSDK_OFFSET(0x179B7520)
#define FNELGPNBDEO_AOCBHDJJJGI__CTOR_OFFSET UNITYSDK_OFFSET(0x179B7510)

inline static constexpr unsigned int FNELGPNBDEO_AOCBHDJJJGI_TypeDefinitionIndex = 39432;

class FNELGPNBDEO_AOCBHDJJJGI : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* PNMOJJBCPJH; // 0x10
	::System::Int32 BPHGCFGJHMM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_AOCBHDJJJGI__CTOR_OFFSET))(this);
	}

	::System::Void LEDGJFJCEPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNELGPNBDEO_AOCBHDJJJGI_LEDGJFJCEPI_OFFSET))(this);
	}
};
