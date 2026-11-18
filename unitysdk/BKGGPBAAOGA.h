#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define BKGGPBAAOGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1507E510)
#define BKGGPBAAOGA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1507E480)
#define BKGGPBAAOGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1507E2B0)
#define BKGGPBAAOGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1507E500)

inline static constexpr unsigned int BKGGPBAAOGA_TypeDefinitionIndex = 71037;

class BKGGPBAAOGA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* JIKBJBFBDIJ; // 0x18
	::GCIMMDDIFBJ* PGPLOMPMIFE; // 0x20
	::UnityEngine::Transform* APPAILAAKBA; // 0x28
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x30
	::UnityEngine::Transform* KKBIOCANEFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGGPBAAOGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKGGPBAAOGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKGGPBAAOGA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKGGPBAAOGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
