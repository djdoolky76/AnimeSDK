#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define OKKKEHLIBAM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C1C680)
#define OKKKEHLIBAM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C1C580)
#define OKKKEHLIBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C670)

inline static constexpr unsigned int OKKKEHLIBAM_TypeDefinitionIndex = 84428;

class OKKKEHLIBAM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AMLGJLFOLKE; // 0x18
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x20
	::UnityEngine::RectTransform* PFNAFELKHHP; // 0x28
	::UnityEngine::RectTransform* CONBBLDCMED; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKKEHLIBAM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKKKEHLIBAM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKKKEHLIBAM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
