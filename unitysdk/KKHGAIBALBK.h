#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class KKHGAIBALBK_MHPMAPKLGFF;
namespace MoleMole { class UIMusicBattleInLevelToolBarBossWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define KKHGAIBALBK_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1995E310)
#define KKHGAIBALBK_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1995E300)
#define KKHGAIBALBK_JENHIJPKEKG_OFFSET UNITYSDK_OFFSET(0x1995E540)
#define KKHGAIBALBK_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x1995E4B0)
#define KKHGAIBALBK_OHJEEBIILAF_OFFSET UNITYSDK_OFFSET(0x1995E5A0)
#define KKHGAIBALBK_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x1995E3D0)
#define KKHGAIBALBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1995E4A0)

inline static constexpr unsigned int KKHGAIBALBK_TypeDefinitionIndex = 81360;

class KKHGAIBALBK : public ::DDHEGIHEKLH
{
public:
	::KKHGAIBALBK_MHPMAPKLGFF* HMKKJKLFCBF; // 0x28
	::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController* NJIIKKDKONM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + KKHGAIBALBK_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_MBDFANLLCHK_OFFSET))(this);
	}

	::UnityEngine::Transform* JENHIJPKEKG()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_JENHIJPKEKG_OFFSET))(this);
	}

	::System::Void OHJEEBIILAF(::System::Boolean FIPHFGHNNBE, ::System::Boolean IOKNPLAMIKB, ::System::Action* NJJPAJNJFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KKHGAIBALBK_OHJEEBIILAF_OFFSET))(this, FIPHFGHNNBE, IOKNPLAMIKB, NJJPAJNJFOJ);
	}
};
