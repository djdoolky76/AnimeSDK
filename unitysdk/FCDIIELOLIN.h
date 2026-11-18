#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define FCDIIELOLIN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB38030)
#define FCDIIELOLIN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB37F50)
#define FCDIIELOLIN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38020)

inline static constexpr unsigned int FCDIIELOLIN_TypeDefinitionIndex = 70013;

class FCDIIELOLIN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FLMKBHEPNNF; // 0x18
	::UnityEngine::RectTransform* PGHAJOMNDDJ; // 0x20
	::UnityEngine::RectTransform* OKLLFEIJKHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDIIELOLIN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCDIIELOLIN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCDIIELOLIN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
