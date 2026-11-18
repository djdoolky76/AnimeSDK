#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class IAAELKLANJF_HGMJNDEEKLD;
namespace MoleMole { class UIMainCityReturnBtnWidgetController; }
namespace MoleMole { class UIWindowController; }

#define IAAELKLANJF_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x140D2CA0)
#define IAAELKLANJF_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x140D2C90)
#define IAAELKLANJF_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x140D2E00)
#define IAAELKLANJF_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x140D2D60)
#define IAAELKLANJF__CTOR_OFFSET UNITYSDK_OFFSET(0x140D2DF0)

inline static constexpr unsigned int IAAELKLANJF_TypeDefinitionIndex = 91109;

class IAAELKLANJF : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIMainCityReturnBtnWidgetController* MDLPAPNHLAD; // 0x28
	::IAAELKLANJF_HGMJNDEEKLD* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAELKLANJF__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAELKLANJF_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IAAELKLANJF_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAELKLANJF_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAELKLANJF_MBDFANLLCHK_OFFSET))(this);
	}
};
