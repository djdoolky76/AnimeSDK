#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define AHGGKOCKDPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143A3CE0)
#define AHGGKOCKDPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143A3C40)
#define AHGGKOCKDPD__CTOR_OFFSET UNITYSDK_OFFSET(0x143A3CD0)

inline static constexpr unsigned int AHGGKOCKDPD_TypeDefinitionIndex = 74098;

class AHGGKOCKDPD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* KEHPAOOHNOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGGKOCKDPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHGGKOCKDPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHGGKOCKDPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
