#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define GLKKHMBPBFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179FAA20)
#define GLKKHMBPBFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179FA910)
#define GLKKHMBPBFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179FA730)
#define GLKKHMBPBFN__CTOR_OFFSET UNITYSDK_OFFSET(0x179FAA10)

inline static constexpr unsigned int GLKKHMBPBFN_TypeDefinitionIndex = 80992;

class GLKKHMBPBFN : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* EKELFNAEHJD; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* PNKFHLKDFOB; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* NBIKKACIPJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKKHMBPBFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLKKHMBPBFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLKKHMBPBFN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLKKHMBPBFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
