#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define NFBNCNPKFLJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115878D0)
#define NFBNCNPKFLJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11587790)
#define NFBNCNPKFLJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115875A0)
#define NFBNCNPKFLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x115878C0)

inline static constexpr unsigned int NFBNCNPKFLJ_TypeDefinitionIndex = 61462;

class NFBNCNPKFLJ : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* HHMIOKJJGGC; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::FGCOIBFFCHB* BKDBHFGOKNJ; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* PEBPCBIELCG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNCNPKFLJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFBNCNPKFLJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBNCNPKFLJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFBNCNPKFLJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
