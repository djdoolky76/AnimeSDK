#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }

#define BHBEGPMIEDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14C437F0)
#define BHBEGPMIEDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14C43720)
#define BHBEGPMIEDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C43560)
#define BHBEGPMIEDM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C437E0)

inline static constexpr unsigned int BHBEGPMIEDM_TypeDefinitionIndex = 56925;

class BHBEGPMIEDM : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::FGCOIBFFCHB* ANEEEIBEEPJ; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEGPMIEDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHBEGPMIEDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBEGPMIEDM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHBEGPMIEDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
