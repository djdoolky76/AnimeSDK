#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOBCAEAJIOJ;
namespace MoleMole { class UIHollowTvSelect3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define FEHBMHPBNGH_POONFBELLHL_HAJHEHOOLEJ_OFFSET UNITYSDK_OFFSET(0x191B1C60)
#define FEHBMHPBNGH_POONFBELLHL_SPAWN_OFFSET UNITYSDK_OFFSET(0x191B1BA0)
#define FEHBMHPBNGH_POONFBELLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x191B1B90)

inline static constexpr unsigned int FEHBMHPBNGH_POONFBELLHL_TypeDefinitionIndex = 40346;

class FEHBMHPBNGH_POONFBELLHL : public ::System::Object
{
public:
	::UnityEngine::Transform* HNKIMODFBHJ; // 0x10
	::MoleMole::UIWindowController* GFANGJBKIBA; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* PPGGHIBCIJE, ::UnityEngine::Transform* HMFJJBHMBDA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_POONFBELLHL__CTOR_OFFSET))(this, PPGGHIBCIJE, HMFJJBHMBDA);
	}

	::NOBCAEAJIOJ* Spawn()
	{
		return ((::NOBCAEAJIOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_POONFBELLHL_SPAWN_OFFSET))(this);
	}

	::MoleMole::UIHollowTvSelect3DModelController* HAJHEHOOLEJ()
	{
		return ((::MoleMole::UIHollowTvSelect3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_POONFBELLHL_HAJHEHOOLEJ_OFFSET))(this);
	}
};
