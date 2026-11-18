#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class IFCPDPILDGG_CELPONGBIAJ;
namespace MoleMole { class UIInLevelBangkovItemSkillButtonWidgetController; }
namespace MoleMole { class UIWindowController; }

#define IFCPDPILDGG_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0xEA1DF20)
#define IFCPDPILDGG_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0xEA1DF10)
#define IFCPDPILDGG_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xEA1E0B0)
#define IFCPDPILDGG_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xEA1E2D0)
#define IFCPDPILDGG_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0xEA1E240)
#define IFCPDPILDGG_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0xEA1DFE0)
#define IFCPDPILDGG__CTOR_OFFSET UNITYSDK_OFFSET(0xEA1E230)

inline static constexpr unsigned int IFCPDPILDGG_TypeDefinitionIndex = 56238;

class IFCPDPILDGG : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelBangkovItemSkillButtonWidgetController* CLMFFHPKEIL; // 0x28
	::IFCPDPILDGG_CELPONGBIAJ* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IFCPDPILDGG_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFCPDPILDGG_IFHNMAGGFAE_OFFSET))(this);
	}
};
