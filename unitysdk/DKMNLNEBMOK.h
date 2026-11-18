#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define DKMNLNEBMOK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BA4DE0)
#define DKMNLNEBMOK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BA4D10)
#define DKMNLNEBMOK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BA4BA0)
#define DKMNLNEBMOK__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA4DD0)

inline static constexpr unsigned int DKMNLNEBMOK_TypeDefinitionIndex = 83877;

class DKMNLNEBMOK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::Transform* ODALDIOFMPH; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMNLNEBMOK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKMNLNEBMOK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DKMNLNEBMOK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMNLNEBMOK_KGEBDLGBGNM_OFFSET))(this);
	}
};
