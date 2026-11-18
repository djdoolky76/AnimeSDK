#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GBOFEFILPJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB81450)
#define GBOFEFILPJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB81310)
#define GBOFEFILPJE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB81440)

inline static constexpr unsigned int GBOFEFILPJE_TypeDefinitionIndex = 78300;

class GBOFEFILPJE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ICOANIAHDKO; // 0x18
	::UnityEngine::RectTransform* GJFHEMGEDJH; // 0x20
	::UnityEngine::RectTransform* GMJHOPJBPLP; // 0x28
	::UnityEngine::RectTransform* KPGDPJGHMCA; // 0x30
	::UnityEngine::RectTransform* IHHNHCLIMEB; // 0x38
	::UnityEngine::RectTransform* GIKOIILPLLE; // 0x40
	::UnityEngine::RectTransform* MLGEMMDLCJP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOFEFILPJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBOFEFILPJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBOFEFILPJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
