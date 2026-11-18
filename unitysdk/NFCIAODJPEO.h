#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NFCIAODJPEO_KFMOOFFCJIE;
namespace MoleMole { class UIConsoleCameraBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define NFCIAODJPEO_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x11587980)
#define NFCIAODJPEO_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x11587970)
#define NFCIAODJPEO_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x11587AC0)
#define NFCIAODJPEO_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x11587A40)
#define NFCIAODJPEO__CTOR_OFFSET UNITYSDK_OFFSET(0x11587AB0)

inline static constexpr unsigned int NFCIAODJPEO_TypeDefinitionIndex = 71338;

class NFCIAODJPEO : public ::DDHEGIHEKLH
{
public:
	::NFCIAODJPEO_KFMOOFFCJIE* OBGBFHGKILC; // 0x28
	::MoleMole::UIConsoleCameraBtnWidgetController* OPGIAIECCHL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIAODJPEO__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIAODJPEO_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NFCIAODJPEO_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIAODJPEO_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCIAODJPEO_MBDFANLLCHK_OFFSET))(this);
	}
};
