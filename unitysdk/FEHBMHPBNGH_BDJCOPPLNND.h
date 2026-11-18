#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOBCAEAJIOJ;
namespace MoleMole { class UIHollowTvSelect3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define FEHBMHPBNGH_BDJCOPPLNND_EKCLJJLJHBC_OFFSET UNITYSDK_OFFSET(0x169CCA40)
#define FEHBMHPBNGH_BDJCOPPLNND_NFKGINEFIIG_OFFSET UNITYSDK_OFFSET(0x169CC980)
#define FEHBMHPBNGH_BDJCOPPLNND_SPAWN_OFFSET UNITYSDK_OFFSET(0x169CC930)
#define FEHBMHPBNGH_BDJCOPPLNND__CTOR_OFFSET UNITYSDK_OFFSET(0x169CC920)

inline static constexpr unsigned int FEHBMHPBNGH_BDJCOPPLNND_TypeDefinitionIndex = 40345;

class FEHBMHPBNGH_BDJCOPPLNND : public ::System::Object
{
public:
	::MoleMole::UIWindowController* GFANGJBKIBA; // 0x10
	::UnityEngine::Transform* HNKIMODFBHJ; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* PPGGHIBCIJE, ::UnityEngine::Transform* HMFJJBHMBDA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_BDJCOPPLNND__CTOR_OFFSET))(this, PPGGHIBCIJE, HMFJJBHMBDA);
	}

	::NOBCAEAJIOJ* Spawn()
	{
		return ((::NOBCAEAJIOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_BDJCOPPLNND_SPAWN_OFFSET))(this);
	}

	::MoleMole::UIHollowTvSelect3DModelController* EKCLJJLJHBC()
	{
		return ((::MoleMole::UIHollowTvSelect3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_BDJCOPPLNND_EKCLJJLJHBC_OFFSET))(this);
	}

	::NOBCAEAJIOJ* NFKGINEFIIG()
	{
		return ((::NOBCAEAJIOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_BDJCOPPLNND_NFKGINEFIIG_OFFSET))(this);
	}
};
