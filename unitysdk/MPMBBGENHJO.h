#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MPMBBGENHJO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1274E860)
#define MPMBBGENHJO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1274E670)
#define MPMBBGENHJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1274E850)

inline static constexpr unsigned int MPMBBGENHJO_TypeDefinitionIndex = 68446;

class MPMBBGENHJO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IOAAHPKLJMO; // 0x18
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x20
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x28
	::MoleMole::MonoGamepadSpaceList* BPBEAGEOKEL; // 0x30
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HGABMBEKIFE; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x50
	::UnityEngine::CanvasGroup* FDJHEBHLJLD; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* EOHHDALKGJG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* JGAMKHLLKMP; // 0x68
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x70
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMBBGENHJO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPMBBGENHJO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPMBBGENHJO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
