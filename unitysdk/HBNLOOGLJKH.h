#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class HBNLOOGLJKH_CMMFIGMLHOC;
namespace MoleMole { class UIGeneralBossSpecialTipsWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }

#define HBNLOOGLJKH_ENPKCOJGCGD_OFFSET UNITYSDK_OFFSET(0x17E2BBF0)
#define HBNLOOGLJKH_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x17E2BA00)
#define HBNLOOGLJKH_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x17E2B9F0)
#define HBNLOOGLJKH_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x17E2BDF0)
#define HBNLOOGLJKH_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x17E2BAC0)
#define HBNLOOGLJKH__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2BDE0)

inline static constexpr unsigned int HBNLOOGLJKH_TypeDefinitionIndex = 46805;

class HBNLOOGLJKH : public ::DDHEGIHEKLH
{
public:
	::HBNLOOGLJKH_CMMFIGMLHOC* OBGBFHGKILC; // 0x28
	::MoleMole::UIGeneralBossSpecialTipsWidgetController* IPOFDPMHKBA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::String* ENPKCOJGCGD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_ENPKCOJGCGD_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLOOGLJKH_MBDFANLLCHK_OFFSET))(this);
	}
};
