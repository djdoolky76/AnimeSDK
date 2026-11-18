#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKFGBMGEBDM.h"
#include "unitysdk/System/Object.h"

class GDEJIHKJAMF;
class JCADHFOKIHK;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPLFEOFHLKA_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1D1FB5F0)
#define PPLFEOFHLKA_FJEHBNMDFIB_OFFSET UNITYSDK_OFFSET(0x1D1FB660)
#define PPLFEOFHLKA_GHNOPNCHBEF_OFFSET UNITYSDK_OFFSET(0x1D1FB860)
#define PPLFEOFHLKA_NAJHDNJCECA_OFFSET UNITYSDK_OFFSET(0x1D1FA980)
#define PPLFEOFHLKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FA7B0)

inline static constexpr unsigned int PPLFEOFHLKA_TypeDefinitionIndex = 41433;

class PPLFEOFHLKA : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPosRot* AEGJIEMBDLC; // 0x10
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x18
	::MoleMole::Config::ConfigPosRot* BANODIDMKOA; // 0x20
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BDDELGKOOHI; // 0x28
	::System::Collections::Generic::List_1<::AKFGBMGEBDM>* CDAOONAFLIE; // 0x30
	::System::String* EBLKBABPBEB; // 0x38
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* FBENNOADONO; // 0x40
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GLJPPHOIFOA; // 0x48
	::System::Single EDAHMBNOBIE; // 0x50
	::System::Boolean NJFFKPPHJAA; // 0x54
	::System::Boolean CHDJGLDHMAO; // 0x55
	::System::Boolean FLBHICLLAEB; // 0x56
	::System::Boolean INKAKKLBHPN; // 0x57
	::System::Int32 FAMFNAIHNJF; // 0x58
	::System::Int32 BNKHCNKJKFO; // 0x5C
	::System::Single GCEHJHKIHAK; // 0x60
	::System::Int32 NFJGDDPEGHG; // 0x64

	::System::Void _ctor(::JCADHFOKIHK* KADBFNFHENH, ::GDEJIHKJAMF* BICFEDCOPHB, ::GDEJIHKJAMF* KHEECHJNJOL)
	{
		return ((::System::Void(*)(::PVOID, ::JCADHFOKIHK*, ::GDEJIHKJAMF*, ::GDEJIHKJAMF*))((::PBYTE)hIl2Cpp + PPLFEOFHLKA__CTOR_OFFSET))(this, KADBFNFHENH, BICFEDCOPHB, KHEECHJNJOL);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLFEOFHLKA_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean FJEHBNMDFIB(::System::String* AELLPLBJELA, ::System::Int32 KDDKDHBELOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PPLFEOFHLKA_FJEHBNMDFIB_OFFSET))(this, AELLPLBJELA, KDDKDHBELOC);
	}

	::System::Boolean GHNOPNCHBEF(::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPLFEOFHLKA_GHNOPNCHBEF_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void NAJHDNJCECA(::JCADHFOKIHK* KADBFNFHENH, ::GDEJIHKJAMF* BICFEDCOPHB, ::GDEJIHKJAMF* KHEECHJNJOL)
	{
		return ((::System::Void(*)(::PVOID, ::JCADHFOKIHK*, ::GDEJIHKJAMF*, ::GDEJIHKJAMF*))((::PBYTE)hIl2Cpp + PPLFEOFHLKA_NAJHDNJCECA_OFFSET))(this, KADBFNFHENH, BICFEDCOPHB, KHEECHJNJOL);
	}
};
