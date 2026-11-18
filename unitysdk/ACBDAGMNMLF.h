#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBBFBJOMKOM.h"

class FBAMLABJMKF;
class KLFOBDFJFJE;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define ACBDAGMNMLF_DDCCILFAJNI_OFFSET UNITYSDK_OFFSET(0x144BB220)
#define ACBDAGMNMLF_EALBDKDEEND_OFFSET UNITYSDK_OFFSET(0x144BB100)
#define ACBDAGMNMLF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x144BB0A0)
#define ACBDAGMNMLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x144BB230)
#define ACBDAGMNMLF__CTOR_OFFSET UNITYSDK_OFFSET(0x144BB090)

inline static constexpr unsigned int ACBDAGMNMLF_TypeDefinitionIndex = 47869;

class ACBDAGMNMLF : public ::DBBFBJOMKOM
{
public:
	static ::System::Single* StaticGet_ECEPEJMLLMA()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ACBDAGMNMLF_TypeDefinitionIndex)->GetStaticField(0x13680);
	}
	static ::System::Single* StaticGet_APPDFPBFEEF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ACBDAGMNMLF_TypeDefinitionIndex)->GetStaticField(0x13684);
	}
	::KLFOBDFJFJE* KNFFEFDBACD; // 0x10
	::FBAMLABJMKF* FANGEPAFDPK; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* ENBIMBGCCBD; // 0x20
	::System::Boolean BNLNBILPMHH; // 0x28

	::System::Void _ctor(::FBAMLABJMKF* PAEAACMFIJM, ::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB, ::KLFOBDFJFJE* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::Config::ConfigHollowChessboard*, ::KLFOBDFJFJE*))((::PBYTE)hIl2Cpp + ACBDAGMNMLF__CTOR_OFFSET))(this, PAEAACMFIJM, DFMKILICPFB, KONLMDBCDCK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBDAGMNMLF__CCTOR_OFFSET))();
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACBDAGMNMLF_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean DDCCILFAJNI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBDAGMNMLF_DDCCILFAJNI_OFFSET))(this);
	}

	::System::Void EALBDKDEEND(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACBDAGMNMLF_EALBDKDEEND_OFFSET))(this, PMNLNNGEIFM);
	}
};
