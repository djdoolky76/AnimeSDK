#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class BKCPNMJCAIF_MJDGMKPPKAE;
namespace MoleMole { class UIInLevelDirectionSkillPanelChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define BKCPNMJCAIF_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1507DCA0)
#define BKCPNMJCAIF_GIKFDIAKCGE_OFFSET UNITYSDK_OFFSET(0x1507DEF0)
#define BKCPNMJCAIF_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1507DC90)
#define BKCPNMJCAIF_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1507DD60)
#define BKCPNMJCAIF_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1507E210)
#define BKCPNMJCAIF__CTOR_OFFSET UNITYSDK_OFFSET(0x1507DEE0)

inline static constexpr unsigned int BKCPNMJCAIF_TypeDefinitionIndex = 54773;

class BKCPNMJCAIF : public ::DDHEGIHEKLH
{
public:
	::BKCPNMJCAIF_MJDGMKPPKAE* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelDirectionSkillPanelChildWindowController* PGLLCKOGGAL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void GIKFDIAKCGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_GIKFDIAKCGE_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCPNMJCAIF_IFHNMAGGFAE_OFFSET))(this);
	}
};
