#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define MJCEEOKCJJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A65DFC0)
#define MJCEEOKCJJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A65DE80)
#define MJCEEOKCJJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A65DC60)
#define MJCEEOKCJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65DFB0)

inline static constexpr unsigned int MJCEEOKCJJB_TypeDefinitionIndex = 83239;

class MJCEEOKCJJB : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* EKELFNAEHJD; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* PNKFHLKDFOB; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* EHMLMJKEJMM; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* NBIKKACIPJH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCEEOKCJJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJCEEOKCJJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCEEOKCJJB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJCEEOKCJJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
