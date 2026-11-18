#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FKIHAPJBNHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11D80C60)
#define FKIHAPJBNHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11D80AC0)
#define FKIHAPJBNHO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D80C50)

inline static constexpr unsigned int FKIHAPJBNHO_TypeDefinitionIndex = 72158;

class FKIHAPJBNHO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* DNOPOMHDABI; // 0x18
	::UnityEngine::Transform* IMKLHFOHLKK; // 0x20
	::UnityEngine::Transform* NPJEKANLOCM; // 0x28
	::UnityEngine::Transform* PEGLHAPAOIH; // 0x30
	::UnityEngine::Transform* IJLDAPDOLDF; // 0x38
	::UnityEngine::Transform* OACNPBPIBCC; // 0x40
	::UnityEngine::RectTransform* MIOFCHHGMAG; // 0x48
	::UnityEngine::Transform* OEBJLBJBPBH; // 0x50
	::UnityEngine::Transform* IGNGELIBKHJ; // 0x58
	::UnityEngine::CanvasGroup* DBJCGFFGHFB; // 0x60
	::UnityEngine::CanvasGroup* NKIKJKDAHIN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKIHAPJBNHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKIHAPJBNHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FKIHAPJBNHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
