#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISummerFishAquariumStarWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class MEKABAIJMNM_1;

#define CIFHJBDBCNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159DBCC0)
#define CIFHJBDBCNF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x159DBBC0)
#define CIFHJBDBCNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159DB9B0)
#define CIFHJBDBCNF__CTOR_OFFSET UNITYSDK_OFFSET(0x159DBCB0)

inline static constexpr unsigned int CIFHJBDBCNF_TypeDefinitionIndex = 61556;

class CIFHJBDBCNF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x18
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UISummerFishAquariumStarWidgetController*>* DOIGGLOKNML; // 0x28
	::MoleMole::NotificationBadge* LHOADKMDIDG; // 0x30
	::FGCOIBFFCHB* MMPPEALBKEP; // 0x38
	::FGCOIBFFCHB* BCMCBDOOGPM; // 0x40
	::FGCOIBFFCHB* JNFHEJOCGND; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFHJBDBCNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIFHJBDBCNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIFHJBDBCNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFHJBDBCNF_KGEBDLGBGNM_OFFSET))(this);
	}
};
