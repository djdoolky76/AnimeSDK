#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IHOFNLNBNFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A9D1B0)
#define IHOFNLNBNFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A9D100)
#define IHOFNLNBNFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A9CF90)
#define IHOFNLNBNFH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D1A0)

inline static constexpr unsigned int IHOFNLNBNFH_TypeDefinitionIndex = 40303;

class IHOFNLNBNFH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x18
	::FGCOIBFFCHB* BAFOGFFMEAC; // 0x20
	::FGCOIBFFCHB* LAMHDPLAHAB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFNLNBNFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHOFNLNBNFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHOFNLNBNFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOFNLNBNFH_KGEBDLGBGNM_OFFSET))(this);
	}
};
