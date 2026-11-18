#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define KKOMCPCIPDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129A2220)
#define KKOMCPCIPDL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129A2150)
#define KKOMCPCIPDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129A1FE0)
#define KKOMCPCIPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x129A2210)

inline static constexpr unsigned int KKOMCPCIPDL_TypeDefinitionIndex = 86743;

class KKOMCPCIPDL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::UnityEngine::GameObject* AOOFHEONBNH; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOMCPCIPDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKOMCPCIPDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKOMCPCIPDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOMCPCIPDL_KGEBDLGBGNM_OFFSET))(this);
	}
};
