#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class MNGABMGMPEA_LKCACPJKNAL;
namespace MoleMole { class UIRewardTipsWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define MNGABMGMPEA_BOKDKNCNLJB_OFFSET UNITYSDK_OFFSET(0x11A25C70)
#define MNGABMGMPEA_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x11A25BA0)
#define MNGABMGMPEA_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x11A25C50)
#define MNGABMGMPEA_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x11A25C80)
#define MNGABMGMPEA_NCMPGLILFJL_OFFSET UNITYSDK_OFFSET(0x11A25D10)
#define MNGABMGMPEA_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x11A25890)
#define MNGABMGMPEA_PNCMJDMLAKD_OFFSET UNITYSDK_OFFSET(0x11A25B30)
#define MNGABMGMPEA__CTOR_OFFSET UNITYSDK_OFFSET(0x11A25C60)

inline static constexpr unsigned int MNGABMGMPEA_TypeDefinitionIndex = 82887;

class MNGABMGMPEA : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIRewardTipsWidgetController* _MBMPFFJOEBI_k__BackingField; // 0x28
	::MNGABMGMPEA_LKCACPJKNAL* KCFKBCPJLNC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA__CTOR_OFFSET))(this);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* LJBPECKCCEA, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MNGABMGMPEA_GFFGAFCMFHD_OFFSET))(this, LJBPECKCCEA, GHBLGLMKCEJ);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_HGLIJKILKKG_OFFSET))(this);
	}

	::UnityEngine::Transform* PNCMJDMLAKD()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_PNCMJDMLAKD_OFFSET))(this);
	}

	::MoleMole::UIRewardTipsWidgetController* BOKDKNCNLJB()
	{
		return ((::MoleMole::UIRewardTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_BOKDKNCNLJB_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void NCMPGLILFJL(::MoleMole::UIRewardTipsWidgetController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRewardTipsWidgetController*))((::PBYTE)hIl2Cpp + MNGABMGMPEA_NCMPGLILFJL_OFFSET))(this, EGEGIMGMJHN);
	}
};
