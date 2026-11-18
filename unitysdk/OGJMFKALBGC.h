#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define OGJMFKALBGC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18441900)
#define OGJMFKALBGC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x184417E0)
#define OGJMFKALBGC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18441610)
#define OGJMFKALBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x184418F0)

inline static constexpr unsigned int OGJMFKALBGC_TypeDefinitionIndex = 40269;

class OGJMFKALBGC : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MDHPPJGDMBC; // 0x18
	::LGINJIKKBJA* MGGKMJLKLEA; // 0x20
	::LGINJIKKBJA* BCNJJKGOLLL; // 0x28
	::LGINJIKKBJA* HBPLINHBFFK; // 0x30
	::LGINJIKKBJA* IPNCFKKJLLL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJMFKALBGC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGJMFKALBGC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGJMFKALBGC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJMFKALBGC_KGEBDLGBGNM_OFFSET))(this);
	}
};
