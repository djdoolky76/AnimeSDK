#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_GIINNFFLFGB.h"
#include "unitysdk/System/Object.h"

class DJDDGKFCNAJ;
class KMMOLFIBFPK;
namespace System { template <typename T> class Action_1; }

#define DJDDGKFCNAJ_AJBLBDHHDIP_NEPHFBHIJIL_OFFSET UNITYSDK_OFFSET(0x134473C0)
#define DJDDGKFCNAJ_AJBLBDHHDIP__CTOR_OFFSET UNITYSDK_OFFSET(0x134473B0)

inline static constexpr unsigned int DJDDGKFCNAJ_AJBLBDHHDIP_TypeDefinitionIndex = 40322;

class DJDDGKFCNAJ_AJBLBDHHDIP : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* EACOGDJEALO; // 0x10
	::DJDDGKFCNAJ* KLHPEBKNIFB; // 0x18
	::System::Boolean KFNMALCMPFE; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single DPFAGAGPDAB; // 0x24
	::DJDDGKFCNAJ_GIINNFFLFGB OBNIAHNMHPF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ_AJBLBDHHDIP__CTOR_OFFSET))(this);
	}

	::System::Void NEPHFBHIJIL(::KMMOLFIBFPK* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + DJDDGKFCNAJ_AJBLBDHHDIP_NEPHFBHIJIL_OFFSET))(this, IMLLDOHDCNC);
	}
};
