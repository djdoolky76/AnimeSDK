#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class AJLFPMDBKFA;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
template <typename T> class KNLFLMMHALL_1;

#define APNIIMEFBGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169D8EB0)
#define APNIIMEFBGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169D8E00)
#define APNIIMEFBGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169D8C30)
#define APNIIMEFBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x169D8EA0)

inline static constexpr unsigned int APNIIMEFBGN_TypeDefinitionIndex = 78884;

class APNIIMEFBGN : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x18
	::KNLFLMMHALL_1<::AJLFPMDBKFA*>* ANNCKFHINCI; // 0x20
	::KNLFLMMHALL_1<::AJLFPMDBKFA*>* DIPGNIBNLON; // 0x28
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIIMEFBGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APNIIMEFBGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + APNIIMEFBGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNIIMEFBGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
