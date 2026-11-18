#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define OLJKGCBBJEA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1844C6A0)
#define OLJKGCBBJEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1844C590)
#define OLJKGCBBJEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C690)

inline static constexpr unsigned int OLJKGCBBJEA_TypeDefinitionIndex = 74975;

class OLJKGCBBJEA : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* PMOKHJMDIMN; // 0x18
	::GCIMMDDIFBJ* OGGDCLIKMON; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJKGCBBJEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLJKGCBBJEA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLJKGCBBJEA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
