#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BDIPHGEOJGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF7934E0)
#define BDIPHGEOJGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF793420)
#define BDIPHGEOJGN__CTOR_OFFSET UNITYSDK_OFFSET(0xF7934D0)

inline static constexpr unsigned int BDIPHGEOJGN_TypeDefinitionIndex = 51444;

class BDIPHGEOJGN : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* HJIKFFIOAAM; // 0x18
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIPHGEOJGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDIPHGEOJGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDIPHGEOJGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
