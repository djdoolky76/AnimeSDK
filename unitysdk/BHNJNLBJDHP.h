#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BHNJNLBJDHP_BEHDAAHKOKG_OFFSET UNITYSDK_OFFSET(0x128AA8B0)
#define BHNJNLBJDHP_EGBAGIODDCI_OFFSET UNITYSDK_OFFSET(0x128AA8E0)
#define BHNJNLBJDHP_EMLKLKLFPPA_OFFSET UNITYSDK_OFFSET(0x128AA8C0)
#define BHNJNLBJDHP_HMMDBGENDPO_OFFSET UNITYSDK_OFFSET(0x128AA8F0)
#define BHNJNLBJDHP_IACCMNAJNAD_OFFSET UNITYSDK_OFFSET(0x128AA8A0)
#define BHNJNLBJDHP_LMOGFDLGLJD_OFFSET UNITYSDK_OFFSET(0x128AA910)
#define BHNJNLBJDHP_PFAHKALKMCJ_OFFSET UNITYSDK_OFFSET(0x128AA8D0)
#define BHNJNLBJDHP_PGPOACOPNKP_OFFSET UNITYSDK_OFFSET(0x128AA900)
#define BHNJNLBJDHP__CTOR_OFFSET UNITYSDK_OFFSET(0x128AA890)

inline static constexpr unsigned int BHNJNLBJDHP_TypeDefinitionIndex = 72246;

class BHNJNLBJDHP : public ::System::Object
{
public:
	::System::Double _MPHKFECCHGB_k__BackingField; // 0x10
	::System::UInt32 _CCBIIMDMLHG_k__BackingField; // 0x18
	::System::Int32 _ILABGDJGKBA_k__BackingField; // 0x1C
	::System::Double _KIDHGFINOHA_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJNLBJDHP__CTOR_OFFSET))(this);
	}

	::System::Double IACCMNAJNAD()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_IACCMNAJNAD_OFFSET))(this);
	}

	::System::Void BEHDAAHKOKG(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_BEHDAAHKOKG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EMLKLKLFPPA(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_EMLKLKLFPPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PFAHKALKMCJ(::System::Double EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_PFAHKALKMCJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EGBAGIODDCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_EGBAGIODDCI_OFFSET))(this);
	}

	::System::Void HMMDBGENDPO(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_HMMDBGENDPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double PGPOACOPNKP()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_PGPOACOPNKP_OFFSET))(this);
	}

	::System::UInt32 LMOGFDLGLJD()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHNJNLBJDHP_LMOGFDLGLJD_OFFSET))(this);
	}
};
