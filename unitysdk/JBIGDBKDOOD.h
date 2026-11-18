#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }

#define JBIGDBKDOOD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194487C0)
#define JBIGDBKDOOD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19448620)
#define JBIGDBKDOOD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194483C0)
#define JBIGDBKDOOD__CTOR_OFFSET UNITYSDK_OFFSET(0x194487B0)

inline static constexpr unsigned int JBIGDBKDOOD_TypeDefinitionIndex = 71603;

class JBIGDBKDOOD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x18
	::FGCOIBFFCHB* HLJMMLMNFDG; // 0x20
	::FGCOIBFFCHB* NNJBILHEMEF; // 0x28
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x40
	::LGINJIKKBJA* NFPPCPHMJAJ; // 0x48
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x50
	::FGCOIBFFCHB* LJMCIHDGPAM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIGDBKDOOD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBIGDBKDOOD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBIGDBKDOOD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIGDBKDOOD_KGEBDLGBGNM_OFFSET))(this);
	}
};
