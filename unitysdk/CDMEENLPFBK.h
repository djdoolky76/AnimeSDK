#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define CDMEENLPFBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159BD380)
#define CDMEENLPFBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x159BD2D0)
#define CDMEENLPFBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159BD160)
#define CDMEENLPFBK__CTOR_OFFSET UNITYSDK_OFFSET(0x159BD370)

inline static constexpr unsigned int CDMEENLPFBK_TypeDefinitionIndex = 51700;

class CDMEENLPFBK : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* GPIOJBLKFAJ; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* CFCJCPJFALN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMEENLPFBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDMEENLPFBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDMEENLPFBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMEENLPFBK_KGEBDLGBGNM_OFFSET))(this);
	}
};
