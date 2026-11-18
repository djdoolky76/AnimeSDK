#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class DHIGLAKDJFF;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
template <typename T> class KNLFLMMHALL_1;

#define GBJJHAFPJNC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C89860)
#define GBJJHAFPJNC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C897D0)
#define GBJJHAFPJNC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C89630)
#define GBJJHAFPJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x11C89850)

inline static constexpr unsigned int GBJJHAFPJNC_TypeDefinitionIndex = 42344;

class GBJJHAFPJNC : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::KNLFLMMHALL_1<::DHIGLAKDJFF*>* ANNCKFHINCI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJJHAFPJNC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBJJHAFPJNC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJJHAFPJNC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBJJHAFPJNC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
