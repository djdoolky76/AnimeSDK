#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NBMDDEGDNJN;
class NPJOEHIIHAL_PGKCODFJDME;
namespace MoleMole { class UIEmojiTipRouletteWidgetControllerV2; }
namespace MoleMole { class UIInLevelEmoticonsTipWidgetController; }
namespace MoleMole { class UIWindowController; }

#define NPJOEHIIHAL_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x114DCFE0)
#define NPJOEHIIHAL_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x114DCFD0)
#define NPJOEHIIHAL_LLFNHEGNCPB_OFFSET UNITYSDK_OFFSET(0x114DD220)
#define NPJOEHIIHAL_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x114DD340)
#define NPJOEHIIHAL_OPICCIDHNLC_OFFSET UNITYSDK_OFFSET(0x114DD3D0)
#define NPJOEHIIHAL_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x114DD0A0)
#define NPJOEHIIHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x114DD210)

inline static constexpr unsigned int NPJOEHIIHAL_TypeDefinitionIndex = 59773;

class NPJOEHIIHAL : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelEmoticonsTipWidgetController* LDCIPIFGICF; // 0x28
	::NPJOEHIIHAL_PGKCODFJDME* OBGBFHGKILC; // 0x30
	::MoleMole::UIEmojiTipRouletteWidgetControllerV2* GOBDKJCHBLA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_PGGAOMNFHJI_OFFSET))(this);
	}

	::NBMDDEGDNJN* LLFNHEGNCPB()
	{
		return ((::NBMDDEGDNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_LLFNHEGNCPB_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Boolean OPICCIDHNLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJOEHIIHAL_OPICCIDHNLC_OFFSET))(this);
	}
};
