#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class PGFBGFBDBAH;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UITwoDMapElement_Data; }

#define PGFBGFBDBAH_HKBAKIJEILF_ALNIHAHGMLN_OFFSET UNITYSDK_OFFSET(0x1B9DA910)
#define PGFBGFBDBAH_HKBAKIJEILF_KBEDNAOMLLN_OFFSET UNITYSDK_OFFSET(0x1B9DB0F0)
#define PGFBGFBDBAH_HKBAKIJEILF_KMLELLCDJAL_OFFSET UNITYSDK_OFFSET(0x1B9DA920)
#define PGFBGFBDBAH_HKBAKIJEILF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DA900)

inline static constexpr unsigned int PGFBGFBDBAH_HKBAKIJEILF_TypeDefinitionIndex = 46101;

class PGFBGFBDBAH_HKBAKIJEILF : public ::System::Object
{
public:
	::MoleMole::MonoGamepadVirtualCursor* MLBOEALKNGH; // 0x10
	::MoleMole::UITwoDMapElement_Data* FPFLICMKDPN; // 0x18
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x20
	::UnityEngine::Vector2 PHBGJMAIAAH; // 0x28
	::System::Single ACKJBFOOIFK; // 0x30
	::System::Single CCAOOONEFJB; // 0x34
	::System::Single IMLLDOHDCNC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HKBAKIJEILF__CTOR_OFFSET))(this);
	}

	::System::Single ALNIHAHGMLN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HKBAKIJEILF_ALNIHAHGMLN_OFFSET))(this);
	}

	::System::Void KMLELLCDJAL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HKBAKIJEILF_KMLELLCDJAL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KBEDNAOMLLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_HKBAKIJEILF_KBEDNAOMLLN_OFFSET))(this);
	}
};
