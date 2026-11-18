#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class CGPAPIIPKLC_PPMOCNBGFLK;
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CGPAPIIPKLC_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1694F530)
#define CGPAPIIPKLC_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1694F520)
#define CGPAPIIPKLC_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1694F6D0)
#define CGPAPIIPKLC_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1694F5F0)
#define CGPAPIIPKLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1694F6C0)

inline static constexpr unsigned int CGPAPIIPKLC_TypeDefinitionIndex = 42076;

class CGPAPIIPKLC : public ::DDHEGIHEKLH
{
public:
	::CGPAPIIPKLC_PPMOCNBGFLK* OBGBFHGKILC; // 0x28
	::MoleMole::UIGeneralNewsBubbleWidgetController* IPOFDPMHKBA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPAPIIPKLC__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPAPIIPKLC_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CGPAPIIPKLC_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPAPIIPKLC_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPAPIIPKLC_MBDFANLLCHK_OFFSET))(this);
	}
};
