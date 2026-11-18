#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define FDLMOFBEHGH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EFAC020)
#define FDLMOFBEHGH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EFABF20)
#define FDLMOFBEHGH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EFABD00)
#define FDLMOFBEHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAC010)

inline static constexpr unsigned int FDLMOFBEHGH_TypeDefinitionIndex = 95070;

class FDLMOFBEHGH : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* KPMPBLHPLMI; // 0x18
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* NIGCIPNLDJJ; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* MJGBHAMEOKN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLMOFBEHGH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDLMOFBEHGH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLMOFBEHGH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDLMOFBEHGH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
