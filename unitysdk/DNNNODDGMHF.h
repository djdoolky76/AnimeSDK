#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DNNNODDGMHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17214240)
#define DNNNODDGMHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x172140E0)
#define DNNNODDGMHF__CTOR_OFFSET UNITYSDK_OFFSET(0x17214230)

inline static constexpr unsigned int DNNNODDGMHF_TypeDefinitionIndex = 53026;

class DNNNODDGMHF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x18
	::UnityEngine::GameObject* OKLLFEIJKHN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DCKPNLHFEOH; // 0x28
	::UnityEngine::RectTransform* KIICDKJHOEM; // 0x30
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x38
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HPLBJKJAGDM; // 0x48
	::UnityEngine::RectTransform* MAPKGHANDKM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNODDGMHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNNNODDGMHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNNNODDGMHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
