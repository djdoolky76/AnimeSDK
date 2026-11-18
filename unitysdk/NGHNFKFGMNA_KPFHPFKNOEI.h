#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define NGHNFKFGMNA_KPFHPFKNOEI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1AE1D4C0)
#define NGHNFKFGMNA_KPFHPFKNOEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1D4B0)

inline static constexpr unsigned int NGHNFKFGMNA_KPFHPFKNOEI_TypeDefinitionIndex = 58750;

class NGHNFKFGMNA_KPFHPFKNOEI : public ::System::Object
{
public:
	::HOCDHMEPPEG EJGDHCIBCJH; // 0x10
	::HOCDHMEPPEG KIJBPKDDOPA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_KPFHPFKNOEI__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_KPFHPFKNOEI_AAHMACBDCPN_OFFSET))(this, EBFCACIEKBC);
	}
};
