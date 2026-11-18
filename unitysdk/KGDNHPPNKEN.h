#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KGDNHPPNKEN_EGBAGIODDCI_OFFSET UNITYSDK_OFFSET(0x186232A0)
#define KGDNHPPNKEN_EMLKLKLFPPA_OFFSET UNITYSDK_OFFSET(0x186232C0)
#define KGDNHPPNKEN_HMMDBGENDPO_OFFSET UNITYSDK_OFFSET(0x18623280)
#define KGDNHPPNKEN_LMOGFDLGLJD_OFFSET UNITYSDK_OFFSET(0x186232B0)
#define KGDNHPPNKEN_LPALEHCIFEE_OFFSET UNITYSDK_OFFSET(0x18623290)
#define KGDNHPPNKEN_MOBFFOEGFEC_OFFSET UNITYSDK_OFFSET(0x18623260)
#define KGDNHPPNKEN_NJKMBDDOIBH_OFFSET UNITYSDK_OFFSET(0x18623250)
#define KGDNHPPNKEN_OPIGEGDLOOD_OFFSET UNITYSDK_OFFSET(0x18623270)
#define KGDNHPPNKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18623240)

inline static constexpr unsigned int KGDNHPPNKEN_TypeDefinitionIndex = 54438;

class KGDNHPPNKEN : public ::System::Object
{
public:
	::System::UInt32 _CCBIIMDMLHG_k__BackingField; // 0x10
	::System::Int32 _ILABGDJGKBA_k__BackingField; // 0x14
	::System::Double _MJDLCIIENCJ_k__BackingField; // 0x18
	::System::Double _JLIOEJJCDHP_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDNHPPNKEN__CTOR_OFFSET))(this);
	}

	::System::Void NJKMBDDOIBH(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_NJKMBDDOIBH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MOBFFOEGFEC(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_MOBFFOEGFEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double OPIGEGDLOOD()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_OPIGEGDLOOD_OFFSET))(this);
	}

	::System::Void HMMDBGENDPO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_HMMDBGENDPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double LPALEHCIFEE()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_LPALEHCIFEE_OFFSET))(this);
	}

	::System::Int32 EGBAGIODDCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_EGBAGIODDCI_OFFSET))(this);
	}

	::System::UInt32 LMOGFDLGLJD()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_LMOGFDLGLJD_OFFSET))(this);
	}

	::System::Void EMLKLKLFPPA(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGDNHPPNKEN_EMLKLKLFPPA_OFFSET))(this, EGEGIMGMJHN);
	}
};
