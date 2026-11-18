#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }

#define DJJHANALBAC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x120884B0)
#define DJJHANALBAC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12088410)
#define DJJHANALBAC__CTOR_OFFSET UNITYSDK_OFFSET(0x120884A0)

inline static constexpr unsigned int DJJHANALBAC_TypeDefinitionIndex = 72224;

class DJJHANALBAC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJHANALBAC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJJHANALBAC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DJJHANALBAC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
