#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define COLOBNMPHCC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1497AB50)
#define COLOBNMPHCC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1497AA80)
#define COLOBNMPHCC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1497A8D0)
#define COLOBNMPHCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1497AB40)

inline static constexpr unsigned int COLOBNMPHCC_TypeDefinitionIndex = 89467;

class COLOBNMPHCC : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::UnityEngine::UI::Text* OICKIFBCFMG; // 0x28
	::UnityEngine::UI::Text* HAHNNHLMKGO; // 0x30
	::UnityEngine::UI::Text* EBLOKCDOAEN; // 0x38
	::MonoUITableScrollV2* MMJCBBOAPHH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLOBNMPHCC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COLOBNMPHCC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLOBNMPHCC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COLOBNMPHCC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
