#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBBFBJOMKOM.h"

class FBAMLABJMKF;
class KLFOBDFJFJE;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define GLDBJLLIBFD_DDCCILFAJNI_OFFSET UNITYSDK_OFFSET(0x149E0160)
#define GLDBJLLIBFD_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x149E0100)
#define GLDBJLLIBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x149E00F0)

inline static constexpr unsigned int GLDBJLLIBFD_TypeDefinitionIndex = 41696;

class GLDBJLLIBFD : public ::DBBFBJOMKOM
{
public:
	::FBAMLABJMKF* FANGEPAFDPK; // 0x10
	::KLFOBDFJFJE* KNFFEFDBACD; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* ENBIMBGCCBD; // 0x20

	::System::Void _ctor(::FBAMLABJMKF* PAEAACMFIJM, ::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB, ::KLFOBDFJFJE* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::Config::ConfigHollowChessboard*, ::KLFOBDFJFJE*))((::PBYTE)hIl2Cpp + GLDBJLLIBFD__CTOR_OFFSET))(this, PAEAACMFIJM, DFMKILICPFB, KONLMDBCDCK);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLDBJLLIBFD_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean DDCCILFAJNI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDBJLLIBFD_DDCCILFAJNI_OFFSET))(this);
	}
};
