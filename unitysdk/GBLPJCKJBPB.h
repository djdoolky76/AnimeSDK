#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class GBLPJCKJBPB_LCDKMIABNMM;
namespace MoleMole { class UIWindowController; }

#define GBLPJCKJBPB_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x141277C0)
#define GBLPJCKJBPB_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x141277B0)
#define GBLPJCKJBPB_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x141278F0)
#define GBLPJCKJBPB_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x14127880)
#define GBLPJCKJBPB__CTOR_OFFSET UNITYSDK_OFFSET(0x141278E0)

inline static constexpr unsigned int GBLPJCKJBPB_TypeDefinitionIndex = 66372;

class GBLPJCKJBPB : public ::DDHEGIHEKLH
{
public:
	::GBLPJCKJBPB_LCDKMIABNMM* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLPJCKJBPB__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLPJCKJBPB_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* MFOGJMCEFOD)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GBLPJCKJBPB_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, MFOGJMCEFOD);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLPJCKJBPB_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLPJCKJBPB_MBDFANLLCHK_OFFSET))(this);
	}
};
