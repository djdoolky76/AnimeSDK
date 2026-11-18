#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJBABCIIKHB.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define KBFACCCCIJD_BIFCCLOFFEC_OFFSET UNITYSDK_OFFSET(0x1E23D350)
#define KBFACCCCIJD_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x1E23D130)
#define KBFACCCCIJD_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x1E23D4B0)
#define KBFACCCCIJD_FLKFKBHMCKK_OFFSET UNITYSDK_OFFSET(0x1E23D250)
#define KBFACCCCIJD_IJMEGNLPPHD_OFFSET UNITYSDK_OFFSET(0x1E23D560)
#define KBFACCCCIJD_JGILCHOBCCE_OFFSET UNITYSDK_OFFSET(0x1E23D740)
#define KBFACCCCIJD_LJCFJAKJMFJ_OFFSET UNITYSDK_OFFSET(0x1E23D840)
#define KBFACCCCIJD_LNHPIHCBGAD_OFFSET UNITYSDK_OFFSET(0x1E23D410)
#define KBFACCCCIJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23D240)

inline static constexpr unsigned int KBFACCCCIJD_TypeDefinitionIndex = 94322;

class KBFACCCCIJD : public ::MJBABCIIKHB
{
public:
	::System::Single ICNIPKFOFIP; // 0x40
	::System::Single KBKHLJPDCFO; // 0x44
	::System::Single HPHJGCFMCBI; // 0x48
	::System::Single JPMEPFNNDPF; // 0x4C
	::System::Single MDABIPEIGOJ; // 0x50
	::System::Single DAAKKNMLEMI; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFACCCCIJD__CTOR_OFFSET))(this);
	}

	::System::Void DDPPCLDJMHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFACCCCIJD_DDPPCLDJMHF_OFFSET))(this);
	}

	::System::Void FLKFKBHMCKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFACCCCIJD_FLKFKBHMCKK_OFFSET))(this);
	}

	::System::Void LNHPIHCBGAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFACCCCIJD_LNHPIHCBGAD_OFFSET))(this);
	}

	::System::Void DFGOJHPONDC(::System::Single JINOBOGJKAG, ::System::Single FOBDBBNNLEO, ::System::Single GAOMBHDKACB, ::System::Single IODCMAGMOPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KBFACCCCIJD_DFGOJHPONDC_OFFSET))(this, JINOBOGJKAG, FOBDBBNNLEO, GAOMBHDKACB, IODCMAGMOPP);
	}

	::System::Void IJMEGNLPPHD(::System::Single JINOBOGJKAG, ::System::Single FOBDBBNNLEO, ::System::Single GAOMBHDKACB, ::System::Single IODCMAGMOPP, ::JGLIFHIAIEH CPILJNMFPJL, ::System::Single CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + KBFACCCCIJD_IJMEGNLPPHD_OFFSET))(this, JINOBOGJKAG, FOBDBBNNLEO, GAOMBHDKACB, IODCMAGMOPP, CPILJNMFPJL, CIIPCCLOHLH);
	}

	::System::Void LJCFJAKJMFJ(::JGLIFHIAIEH OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + KBFACCCCIJD_LJCFJAKJMFJ_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void BIFCCLOFFEC(::JGLIFHIAIEH OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + KBFACCCCIJD_BIFCCLOFFEC_OFFSET))(this, OHOGDOMNHNK);
	}

	::System::Void JGILCHOBCCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFACCCCIJD_JGILCHOBCCE_OFFSET))(this);
	}
};
