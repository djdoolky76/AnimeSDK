#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System { class String; }

#define IHDMLLPKNGF_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x101467A0)
#define IHDMLLPKNGF_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x101468B0)
#define IHDMLLPKNGF__CTOR_OFFSET UNITYSDK_OFFSET(0x10146840)

inline static constexpr unsigned int IHDMLLPKNGF_TypeDefinitionIndex = 65148;

class IHDMLLPKNGF : public ::PKMJPMFCNBK
{
public:
	::System::String* KIHGNGKBADE; // 0x80
	::System::Boolean LKBNNDIBCEL; // 0x88
	::System::Boolean PJHECJMFABK; // 0x89

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDMLLPKNGF__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDMLLPKNGF_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDMLLPKNGF_KHJELIBOECB_OFFSET))(this);
	}
};
