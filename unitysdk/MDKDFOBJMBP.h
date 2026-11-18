#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class MDKDFOBJMBP_ICGLKCJCMAM;
namespace MoleMole { class UIMusicBattleInLevelPlayWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define MDKDFOBJMBP_FMMMICPEMFM_OFFSET UNITYSDK_OFFSET(0x14D66590)
#define MDKDFOBJMBP_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x14D66270)
#define MDKDFOBJMBP_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x14D66260)
#define MDKDFOBJMBP_MHNMPBGMANL_OFFSET UNITYSDK_OFFSET(0x14D663A0)
#define MDKDFOBJMBP_NFEEOCHMGKN_OFFSET UNITYSDK_OFFSET(0x14D66340)
#define MDKDFOBJMBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D66330)

inline static constexpr unsigned int MDKDFOBJMBP_TypeDefinitionIndex = 84981;

class MDKDFOBJMBP : public ::DDHEGIHEKLH
{
public:
	::MDKDFOBJMBP_ICGLKCJCMAM* HMKKJKLFCBF; // 0x28
	::MoleMole::UIMusicBattleInLevelPlayWidgetController* CPAPKBLKEAL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::Transform* NFEEOCHMGKN()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_NFEEOCHMGKN_OFFSET))(this);
	}

	::MoleMole::UIMusicBattleInLevelPlayWidgetController* MHNMPBGMANL()
	{
		return ((::MoleMole::UIMusicBattleInLevelPlayWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_MHNMPBGMANL_OFFSET))(this);
	}

	::System::Void FMMMICPEMFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDFOBJMBP_FMMMICPEMFM_OFFSET))(this);
	}
};
