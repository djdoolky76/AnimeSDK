#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define ILCKLJMLBJO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x198811F0)
#define ILCKLJMLBJO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19881160)
#define ILCKLJMLBJO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19881010)
#define ILCKLJMLBJO__CTOR_OFFSET UNITYSDK_OFFSET(0x198811E0)

inline static constexpr unsigned int ILCKLJMLBJO_TypeDefinitionIndex = 69980;

class ILCKLJMLBJO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::RectTransform* JDNOCDCBFAO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKLJMLBJO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILCKLJMLBJO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ILCKLJMLBJO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKLJMLBJO_KGEBDLGBGNM_OFFSET))(this);
	}
};
