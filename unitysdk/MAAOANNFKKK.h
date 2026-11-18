#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define MAAOANNFKKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD440130)
#define MAAOANNFKKK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD440080)
#define MAAOANNFKKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD43FF00)
#define MAAOANNFKKK__CTOR_OFFSET UNITYSDK_OFFSET(0xD440120)

inline static constexpr unsigned int MAAOANNFKKK_TypeDefinitionIndex = 50787;

class MAAOANNFKKK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FBNLJFAIEHD; // 0x18
	::LGINJIKKBJA* BJMKOLMEPHI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAOANNFKKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAAOANNFKKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAOANNFKKK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAAOANNFKKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
