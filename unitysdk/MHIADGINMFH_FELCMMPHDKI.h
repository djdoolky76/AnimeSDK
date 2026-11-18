#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHIADGINMFH_HPHFPFOPMGK;
class MHIADGINMFH_MGDJFGINGOD;

#define MHIADGINMFH_FELCMMPHDKI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x15E2E710)
#define MHIADGINMFH_FELCMMPHDKI__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2E700)

inline static constexpr unsigned int MHIADGINMFH_FELCMMPHDKI_TypeDefinitionIndex = 41440;

class MHIADGINMFH_FELCMMPHDKI : public ::System::Object
{
public:
	::MHIADGINMFH_HPHFPFOPMGK* EJGDHCIBCJH; // 0x10
	::MHIADGINMFH_MGDJFGINGOD* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIADGINMFH_FELCMMPHDKI__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIADGINMFH_FELCMMPHDKI_AAHMACBDCPN_OFFSET))(this);
	}
};
