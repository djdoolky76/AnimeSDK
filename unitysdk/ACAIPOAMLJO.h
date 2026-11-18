#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define ACAIPOAMLJO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16D5F3D0)
#define ACAIPOAMLJO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16D5F2D0)
#define ACAIPOAMLJO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5F3C0)

inline static constexpr unsigned int ACAIPOAMLJO_TypeDefinitionIndex = 77787;

class ACAIPOAMLJO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::RawImage* KFMGMEJEIKD; // 0x18
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x20
	::UnityEngine::GameObject* JGPIGFLIDOJ; // 0x28
	::UnityEngine::GameObject* FJAIOHDJOMI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAIPOAMLJO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACAIPOAMLJO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACAIPOAMLJO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
