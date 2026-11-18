#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class JLLGFKLACDA_AFHDMGBFGFI;
namespace MoleMole { class UIInLevelQTEBtnPanelChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define JLLGFKLACDA_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x18743000)
#define JLLGFKLACDA_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x18742FF0)
#define JLLGFKLACDA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x18743200)
#define JLLGFKLACDA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x18743390)
#define JLLGFKLACDA_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x18743420)
#define JLLGFKLACDA_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x187430C0)
#define JLLGFKLACDA__CTOR_OFFSET UNITYSDK_OFFSET(0x18743380)

inline static constexpr unsigned int JLLGFKLACDA_TypeDefinitionIndex = 45974;

class JLLGFKLACDA : public ::DDHEGIHEKLH
{
public:
	::JLLGFKLACDA_AFHDMGBFGFI* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelQTEBtnPanelChildWindowController* HABFFCPELPP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + JLLGFKLACDA_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLGFKLACDA_MBDFANLLCHK_OFFSET))(this);
	}
};
