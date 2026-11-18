#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define NDPCNFKINBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1727EE00)
#define NDPCNFKINBE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1727ED50)
#define NDPCNFKINBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1727EB50)
#define NDPCNFKINBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1727EDF0)

inline static constexpr unsigned int NDPCNFKINBE_TypeDefinitionIndex = 79660;

class NDPCNFKINBE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x28
	::UnityEngine::GameObject* MOEPHLCOLJM; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPCNFKINBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDPCNFKINBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPCNFKINBE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NDPCNFKINBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
