#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define OOFBIGBILMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178A3960)
#define OOFBIGBILMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178A3890)
#define OOFBIGBILMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178A3720)
#define OOFBIGBILMP__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3950)

inline static constexpr unsigned int OOFBIGBILMP_TypeDefinitionIndex = 39012;

class OOFBIGBILMP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::GameObject* FEKAMKHOIMK; // 0x20
	::UnityEngine::GameObject* MNHOFEMCLNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFBIGBILMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOFBIGBILMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFBIGBILMP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOFBIGBILMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
