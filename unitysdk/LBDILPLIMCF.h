#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/BaseMove_AIMoveTargetState.h"

class ACNLKLCDALA;
class CAPAFILOMGC;
class GEIHCPAOKKK;
class NLNIIPDCABP;
namespace System { class String; }

#define LBDILPLIMCF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1517CD70)
#define LBDILPLIMCF_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1517C660)
#define LBDILPLIMCF_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x1517CFE0)
#define LBDILPLIMCF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1517C6C0)
#define LBDILPLIMCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1517CD50)

inline static constexpr unsigned int LBDILPLIMCF_TypeDefinitionIndex = 47954;

class LBDILPLIMCF : public ::LDDHJLCEFOJ
{
public:
	::GEIHCPAOKKK* HPDFPPAHNGL; // 0x28
	::ACNLKLCDALA* HMKPMMCDECM; // 0x30
	::System::String* OHAADAGKHKK; // 0x38
	::NLNIIPDCABP* MOJPJEKJKNE; // 0x40
	::CAPAFILOMGC* LCIOJOKGJOJ; // 0x48
	::System::Single NEEGKNOOOLI; // 0x50
	::MoleMole::AIMoveTargetType OBNIAHNMHPF; // 0x54
	::System::Single JJIKJCJOEFM; // 0x58
	::System::Single BCKJIHJHJDE; // 0x5C
	::MoleMole::BaseMove_AIMoveTargetState FOMFEHLHOJP; // 0x60
	::System::Single DLJBOGGIAEE; // 0x64
	::System::Single MBHIBJFJAPO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDILPLIMCF__CTOR_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDILPLIMCF_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDILPLIMCF_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::ACNLKLCDALA* PAHAKIECKMN, ::CAPAFILOMGC* JPMBBNEMEDD, ::NLNIIPDCABP* OPLGDAMMLHM, ::GEIHCPAOKKK* MNIEFFFEKEH)
	{
		return ((::System::Void(*)(::PVOID, ::ACNLKLCDALA*, ::CAPAFILOMGC*, ::NLNIIPDCABP*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + LBDILPLIMCF_BBOMJDBNHIC_OFFSET))(this, PAHAKIECKMN, JPMBBNEMEDD, OPLGDAMMLHM, MNIEFFFEKEH);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDILPLIMCF_LJNFANAEHHA_OFFSET))(this);
	}
};
