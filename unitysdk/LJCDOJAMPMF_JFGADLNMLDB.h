#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJCDOJAMPMF_AMIPHFAFDJA;
class LJCDOJAMPMF_GDMCHIGHKCP;

#define LJCDOJAMPMF_JFGADLNMLDB_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x13CF1920)
#define LJCDOJAMPMF_JFGADLNMLDB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF1910)

inline static constexpr unsigned int LJCDOJAMPMF_JFGADLNMLDB_TypeDefinitionIndex = 71954;

class LJCDOJAMPMF_JFGADLNMLDB : public ::System::Object
{
public:
	::LJCDOJAMPMF_GDMCHIGHKCP* EJGDHCIBCJH; // 0x10
	::LJCDOJAMPMF_AMIPHFAFDJA* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_JFGADLNMLDB__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_JFGADLNMLDB_AAHMACBDCPN_OFFSET))(this);
	}
};
