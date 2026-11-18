#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define OPHHNBFOEGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F95D10)
#define OPHHNBFOEGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F95C40)
#define OPHHNBFOEGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F95A30)
#define OPHHNBFOEGN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F95D00)

inline static constexpr unsigned int OPHHNBFOEGN_TypeDefinitionIndex = 59671;

class OPHHNBFOEGN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ELBOLGJMGEF; // 0x18
	::GCIMMDDIFBJ* KFNJPICFIDJ; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::GCIMMDDIFBJ* KKHENFOHJCI; // 0x30
	::FGCOIBFFCHB* DIIJEHHCAEM; // 0x38
	::GCIMMDDIFBJ* CDPLHMCECPB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHHNBFOEGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPHHNBFOEGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPHHNBFOEGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHHNBFOEGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
