#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define OLOHNDICHOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11B46570)
#define OLOHNDICHOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11B464E0)
#define OLOHNDICHOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11B46380)
#define OLOHNDICHOA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46560)

inline static constexpr unsigned int OLOHNDICHOA_TypeDefinitionIndex = 59761;

class OLOHNDICHOA : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* NIGCIPNLDJJ; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHNDICHOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLOHNDICHOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHNDICHOA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLOHNDICHOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
