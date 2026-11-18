#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define BPIGIJEPBKA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16934870)
#define BPIGIJEPBKA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169347E0)
#define BPIGIJEPBKA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16934690)
#define BPIGIJEPBKA__CTOR_OFFSET UNITYSDK_OFFSET(0x16934860)

inline static constexpr unsigned int BPIGIJEPBKA_TypeDefinitionIndex = 73970;

class BPIGIJEPBKA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIGIJEPBKA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIGIJEPBKA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIGIJEPBKA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIGIJEPBKA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
