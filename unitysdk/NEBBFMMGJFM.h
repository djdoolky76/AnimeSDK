#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NEBBFMMGJFM_EIAFKKKPHEI;
namespace MoleMole { class UIMusicBattleInLevelFeverTipsWidgetController; }
namespace MoleMole { class UIWindowController; }
template <typename T> class MEKABAIJMNM_1;

#define NEBBFMMGJFM_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x12C569B0)
#define NEBBFMMGJFM_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x12C569A0)
#define NEBBFMMGJFM_JMHMIPIGCCA_OFFSET UNITYSDK_OFFSET(0x12C56A80)
#define NEBBFMMGJFM__CTOR_OFFSET UNITYSDK_OFFSET(0x12C56A70)

inline static constexpr unsigned int NEBBFMMGJFM_TypeDefinitionIndex = 52359;

class NEBBFMMGJFM : public ::DDHEGIHEKLH
{
public:
	::NEBBFMMGJFM_EIAFKKKPHEI* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBFMMGJFM__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBFMMGJFM_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NEBBFMMGJFM_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::MEKABAIJMNM_1<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>* JMHMIPIGCCA()
	{
		return ((::MEKABAIJMNM_1<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBBFMMGJFM_JMHMIPIGCCA_OFFSET))(this);
	}
};
