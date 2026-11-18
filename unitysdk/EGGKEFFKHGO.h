#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EGGKEFFKHGO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17109530)
#define EGGKEFFKHGO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17109430)
#define EGGKEFFKHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x17109520)

inline static constexpr unsigned int EGGKEFFKHGO_TypeDefinitionIndex = 57799;

class EGGKEFFKHGO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PFNAFELKHHP; // 0x18
	::UnityEngine::RectTransform* CONBBLDCMED; // 0x20
	::UnityEngine::RectTransform* BOGHCBIHHBF; // 0x28
	::UnityEngine::RectTransform* AMLGJLFOLKE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGGKEFFKHGO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGGKEFFKHGO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGGKEFFKHGO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
