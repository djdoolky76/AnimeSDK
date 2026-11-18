#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_GIINNFFLFGB.h"
#include "unitysdk/System/Object.h"

class DJDDGKFCNAJ;
class DJDDGKFCNAJ_DAHDOOBDMEN;

#define DJDDGKFCNAJ_ANLPGDIAAGP_CNPHGCAIOFN_OFFSET UNITYSDK_OFFSET(0x19414AC0)
#define DJDDGKFCNAJ_ANLPGDIAAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x19414AB0)

inline static constexpr unsigned int DJDDGKFCNAJ_ANLPGDIAAGP_TypeDefinitionIndex = 40328;

class DJDDGKFCNAJ_ANLPGDIAAGP : public ::System::Object
{
public:
	::DJDDGKFCNAJ_DAHDOOBDMEN* NFFDNAFDPGE; // 0x10
	::DJDDGKFCNAJ* KLHPEBKNIFB; // 0x18
	::System::Single DPFAGAGPDAB; // 0x20
	::DJDDGKFCNAJ_GIINNFFLFGB AELLPLBJELA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ_ANLPGDIAAGP__CTOR_OFFSET))(this);
	}

	::System::Void CNPHGCAIOFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ_ANLPGDIAAGP_CNPHGCAIOFN_OFFSET))(this);
	}
};
