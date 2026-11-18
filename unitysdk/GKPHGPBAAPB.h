#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define GKPHGPBAAPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11DBADC0)
#define GKPHGPBAAPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11DBAD40)
#define GKPHGPBAAPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11DBAB80)
#define GKPHGPBAAPB__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBADB0)

inline static constexpr unsigned int GKPHGPBAAPB_TypeDefinitionIndex = 54730;

class GKPHGPBAAPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::UnityEngine::CanvasGroup* INEFGIHAMOB; // 0x20
	::UnityEngine::GameObject* JGPIGFLIDOJ; // 0x28
	::UnityEngine::GameObject* FJAIOHDJOMI; // 0x30
	::UnityEngine::UI::RawImage* KFMGMEJEIKD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHGPBAAPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKPHGPBAAPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKPHGPBAAPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKPHGPBAAPB_KGEBDLGBGNM_OFFSET))(this);
	}
};
