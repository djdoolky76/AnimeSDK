#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMarcelNameWidgetController_Display.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGrandMarcelAdventureChildWindowController; }
namespace MoleMole { class UIMarcelNameWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NCFDJIKGICE_BEJEIDLBHIF_OFFSET UNITYSDK_OFFSET(0x13ED2520)
#define NCFDJIKGICE_IFKIFLOMCKF_OFFSET UNITYSDK_OFFSET(0x13ED2260)
#define NCFDJIKGICE_LEEIIKCDLJE_OFFSET UNITYSDK_OFFSET(0x13ED26D0)
#define NCFDJIKGICE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13ED2720)
#define NCFDJIKGICE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13ED21F0)
#define NCFDJIKGICE_PLOAKKAOBLE_OFFSET UNITYSDK_OFFSET(0x13ED23B0)
#define NCFDJIKGICE__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED2160)

inline static constexpr unsigned int NCFDJIKGICE_TypeDefinitionIndex = 71496;

class NCFDJIKGICE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIMarcelNameWidgetController*>* DMFNNFMDONC; // 0x10
	::UnityEngine::Transform* FACHMAJIADM; // 0x18
	::MoleMole::UIGrandMarcelAdventureChildWindowController* MACHGCHBMBO; // 0x20

	::System::Void _ctor(::MoleMole::UIGrandMarcelAdventureChildWindowController* FIEJJJIKOPC, ::UnityEngine::Transform* KPFBEBFLCJI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGrandMarcelAdventureChildWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NCFDJIKGICE__CTOR_OFFSET))(this, FIEJJJIKOPC, KPFBEBFLCJI);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFDJIKGICE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void IFKIFLOMCKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFDJIKGICE_IFKIFLOMCKF_OFFSET))(this);
	}

	::System::Void PLOAKKAOBLE(::System::UInt32 NJNCGJLHLKC, ::System::UInt32 ACHBBPJIBIE, ::MoleMole::UIMarcelNameWidgetController_Display NEJLHBPLCCO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::UIMarcelNameWidgetController_Display))((::PBYTE)hIl2Cpp + NCFDJIKGICE_PLOAKKAOBLE_OFFSET))(this, NJNCGJLHLKC, ACHBBPJIBIE, NEJLHBPLCCO);
	}

	::System::Void BEJEIDLBHIF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCFDJIKGICE_BEJEIDLBHIF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LEEIIKCDLJE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCFDJIKGICE_LEEIIKCDLJE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFDJIKGICE_OKJCHFGIKBH_OFFSET))(this);
	}
};
