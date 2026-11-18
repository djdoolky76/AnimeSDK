#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class AMIFODDPLBB_ONLODGDEOJK;
class BHECBBCIMBF;
namespace MoleMole { class UIBigScenePersonalOutWidgetController; }
namespace MoleMole { class UIWindowController; }

#define AMIFODDPLBB_FBPDMCNFHNM_OFFSET UNITYSDK_OFFSET(0x1820EF80)
#define AMIFODDPLBB_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1820ED40)
#define AMIFODDPLBB_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1820ED30)
#define AMIFODDPLBB_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1820EEF0)
#define AMIFODDPLBB_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1820EE00)
#define AMIFODDPLBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1820EEE0)

inline static constexpr unsigned int AMIFODDPLBB_TypeDefinitionIndex = 55740;

class AMIFODDPLBB : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIBigScenePersonalOutWidgetController* IDOHPCAJDGM; // 0x28
	::AMIFODDPLBB_ONLODGDEOJK* BJFBNJEGMJP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFODDPLBB__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFODDPLBB_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + AMIFODDPLBB_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFODDPLBB_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIFODDPLBB_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void FBPDMCNFHNM(::System::Boolean ANBLNOILGGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMIFODDPLBB_FBPDMCNFHNM_OFFSET))(this, ANBLNOILGGA);
	}
};
