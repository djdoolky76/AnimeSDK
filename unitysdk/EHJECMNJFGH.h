#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EHJECMNJFGH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F2F3C0)
#define EHJECMNJFGH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F2F2F0)
#define EHJECMNJFGH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F2F140)
#define EHJECMNJFGH__CTOR_OFFSET UNITYSDK_OFFSET(0x10F2F3B0)

inline static constexpr unsigned int EHJECMNJFGH_TypeDefinitionIndex = 82067;

class EHJECMNJFGH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* OPPMEPKMCGH; // 0x18
	::UnityEngine::Transform* MBKACMJJMBH; // 0x20
	::LGINJIKKBJA* IGCAGMLFDJD; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJECMNJFGH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHJECMNJFGH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJECMNJFGH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHJECMNJFGH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
