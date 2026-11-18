#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define PIKHOADKNID_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14B9E670)
#define PIKHOADKNID_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14B9E5D0)
#define PIKHOADKNID__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9E660)

inline static constexpr unsigned int PIKHOADKNID_TypeDefinitionIndex = 89580;

class PIKHOADKNID : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKHOADKNID__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIKHOADKNID_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIKHOADKNID_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
