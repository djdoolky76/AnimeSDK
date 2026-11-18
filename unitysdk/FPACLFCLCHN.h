#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define FPACLFCLCHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D91F80)
#define FPACLFCLCHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D91EC0)
#define FPACLFCLCHN__CTOR_OFFSET UNITYSDK_OFFSET(0x11D91F70)

inline static constexpr unsigned int FPACLFCLCHN_TypeDefinitionIndex = 70189;

class FPACLFCLCHN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HEKPNMLHFNK; // 0x18
	::UnityEngine::GameObject* MCFBELGDPEE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPACLFCLCHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPACLFCLCHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPACLFCLCHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
