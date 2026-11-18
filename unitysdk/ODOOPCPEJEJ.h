#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define ODOOPCPEJEJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x114E9A00)
#define ODOOPCPEJEJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x114E9900)
#define ODOOPCPEJEJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x114E9740)
#define ODOOPCPEJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x114E99F0)

inline static constexpr unsigned int ODOOPCPEJEJ_TypeDefinitionIndex = 77484;

class ODOOPCPEJEJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MAHNABIKKDL; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::UnityEngine::RectTransform* AGLOILAOJNM; // 0x28
	::LGINJIKKBJA* OKGBOAENDNC; // 0x30
	::LGINJIKKBJA* FCMOGBOKMLI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOOPCPEJEJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODOOPCPEJEJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODOOPCPEJEJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOOPCPEJEJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
