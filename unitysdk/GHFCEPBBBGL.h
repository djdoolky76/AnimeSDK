#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define GHFCEPBBBGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179F0AB0)
#define GHFCEPBBBGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179F0A10)
#define GHFCEPBBBGL__CTOR_OFFSET UNITYSDK_OFFSET(0x179F0AA0)

inline static constexpr unsigned int GHFCEPBBBGL_TypeDefinitionIndex = 83837;

class GHFCEPBBBGL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* IEOIENFFIGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFCEPBBBGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHFCEPBBBGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHFCEPBBBGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
