#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class MFOGLKCLHEJ_OPKHHIOKOGI;
namespace MoleMole { class UIMultiInteractionTargetListChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }

#define MFOGLKCLHEJ_CBPEFGGHBMA_OFFSET UNITYSDK_OFFSET(0x1592B7B0)
#define MFOGLKCLHEJ_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1592B4D0)
#define MFOGLKCLHEJ_GOOJOKFPEID_OFFSET UNITYSDK_OFFSET(0x1592B9A0)
#define MFOGLKCLHEJ_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1592B4C0)
#define MFOGLKCLHEJ_HGNPINPHOLG_OFFSET UNITYSDK_OFFSET(0x1592B700)
#define MFOGLKCLHEJ_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1592B670)
#define MFOGLKCLHEJ_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1592B590)
#define MFOGLKCLHEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1592B660)

inline static constexpr unsigned int MFOGLKCLHEJ_TypeDefinitionIndex = 40041;

class MFOGLKCLHEJ : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIMultiInteractionTargetListChildWindowController* LHKEBEOJICI; // 0x28
	::MFOGLKCLHEJ_OPKHHIOKOGI* OBGBFHGKILC; // 0x30
	::System::Boolean GMOGALHANAG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void HGNPINPHOLG(::System::Boolean JHHGNJHIKBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_HGNPINPHOLG_OFFSET))(this, JHHGNJHIKBL);
	}

	::System::Void CBPEFGGHBMA(::System::EventArgs* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_CBPEFGGHBMA_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void GOOJOKFPEID(::System::Int32 HNDJGDABBIB, ::System::Int32 INHODFKJDPK, ::System::Int32 LJADDKHAGEL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MFOGLKCLHEJ_GOOJOKFPEID_OFFSET))(this, HNDJGDABBIB, INHODFKJDPK, LJADDKHAGEL);
	}
};
