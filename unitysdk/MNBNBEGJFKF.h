#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define MNBNBEGJFKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177CFB30)
#define MNBNBEGJFKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177CFA30)
#define MNBNBEGJFKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177CF890)
#define MNBNBEGJFKF__CTOR_OFFSET UNITYSDK_OFFSET(0x177CFB20)

inline static constexpr unsigned int MNBNBEGJFKF_TypeDefinitionIndex = 48501;

class MNBNBEGJFKF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IPNCFKKJLLL; // 0x18
	::LGINJIKKBJA* MGGKMJLKLEA; // 0x20
	::LGINJIKKBJA* JLALMHNOEOE; // 0x28
	::LGINJIKKBJA* HBPLINHBFFK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNBEGJFKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBNBEGJFKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNBEGJFKF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBNBEGJFKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
