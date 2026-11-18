#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class IPIKMNOIMCH_AKDJAKNKCNL;
namespace MoleMole { class UIEtherInfectionProgressWidgetController; }
namespace MoleMole { class UIWindowController; }

#define IPIKMNOIMCH_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x160C4160)
#define IPIKMNOIMCH_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x160C4150)
#define IPIKMNOIMCH_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x160C4360)
#define IPIKMNOIMCH_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x160C4580)
#define IPIKMNOIMCH_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x160C44F0)
#define IPIKMNOIMCH_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x160C4220)
#define IPIKMNOIMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x160C44E0)

inline static constexpr unsigned int IPIKMNOIMCH_TypeDefinitionIndex = 70377;

class IPIKMNOIMCH : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIEtherInfectionProgressWidgetController* KKNLIOPIAMB; // 0x28
	::IPIKMNOIMCH_AKDJAKNKCNL* OBGBFHGKILC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_MBDFANLLCHK_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPIKMNOIMCH_IFHNMAGGFAE_OFFSET))(this);
	}
};
