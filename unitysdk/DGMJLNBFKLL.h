#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCBBDGEGPM;
namespace System { class Action; }

#define DGMJLNBFKLL_EODMFKBPAAL_OFFSET UNITYSDK_OFFSET(0x194107B0)
#define DGMJLNBFKLL_FCDKMGIEPKM_OFFSET UNITYSDK_OFFSET(0x19410900)
#define DGMJLNBFKLL_JFEGMKJCBKG_OFFSET UNITYSDK_OFFSET(0x19410BB0)
#define DGMJLNBFKLL_KFJAMFDALEF_OFFSET UNITYSDK_OFFSET(0x194106A0)
#define DGMJLNBFKLL_KLADGIINAEK_OFFSET UNITYSDK_OFFSET(0x19410800)
#define DGMJLNBFKLL_OHEKENACCEN_OFFSET UNITYSDK_OFFSET(0x194109B0)
#define DGMJLNBFKLL_PONFAMCDLIJ_OFFSET UNITYSDK_OFFSET(0x19410AB0)
#define DGMJLNBFKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19410690)

inline static constexpr unsigned int DGMJLNBFKLL_TypeDefinitionIndex = 47357;

class DGMJLNBFKLL : public ::System::Object
{
public:
	::System::Action* KOLDAOHCHLD; // 0x10
	::System::Action* BPOJMEPIIMB; // 0x18
	::System::Action* CIKILJHFCLH; // 0x20
	::NPCBBDGEGPM* PHEAPOHJBIN; // 0x28

	::System::Void _ctor(::NPCBBDGEGPM* BPHOLJHOJAI)
	{
		return ((::System::Void(*)(::PVOID, ::NPCBBDGEGPM*))((::PBYTE)hIl2Cpp + DGMJLNBFKLL__CTOR_OFFSET))(this, BPHOLJHOJAI);
	}

	::System::Void KFJAMFDALEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_KFJAMFDALEF_OFFSET))(this);
	}

	::System::Void EODMFKBPAAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_EODMFKBPAAL_OFFSET))(this);
	}

	::System::Void FCDKMGIEPKM(::System::Action* GOHKKPMKPPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_FCDKMGIEPKM_OFFSET))(this, GOHKKPMKPPM);
	}

	::System::Void OHEKENACCEN(::System::Action* CBHHHLGEMNC, ::System::Action* JOIFEMEHMHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_OHEKENACCEN_OFFSET))(this, CBHHHLGEMNC, JOIFEMEHMHJ);
	}

	::System::Void KLADGIINAEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_KLADGIINAEK_OFFSET))(this);
	}

	::System::Void PONFAMCDLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_PONFAMCDLIJ_OFFSET))(this);
	}

	::System::Void JFEGMKJCBKG(::System::Action* CBHHHLGEMNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DGMJLNBFKLL_JFEGMKJCBKG_OFFSET))(this, CBHHHLGEMNC);
	}
};
