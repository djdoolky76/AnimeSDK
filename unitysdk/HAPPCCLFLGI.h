#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define HAPPCCLFLGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D7DB30)
#define HAPPCCLFLGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D7D9F0)
#define HAPPCCLFLGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D7D810)
#define HAPPCCLFLGI__CTOR_OFFSET UNITYSDK_OFFSET(0x13D7DB20)

inline static constexpr unsigned int HAPPCCLFLGI_TypeDefinitionIndex = 74853;

class HAPPCCLFLGI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EOIJFGIDGCE; // 0x18
	::LGINJIKKBJA* KAJMGBODMKP; // 0x20
	::FGCOIBFFCHB* BILHBDGCCMA; // 0x28
	::LGINJIKKBJA* ICNIHACFEEN; // 0x30
	::UnityEngine::Transform* GDJLPGIBPDO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPCCLFLGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAPPCCLFLGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAPPCCLFLGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPCCLFLGI_KGEBDLGBGNM_OFFSET))(this);
	}
};
