#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BFDEICIPFHF_JLCLOJIHDPO;
class BHECBBCIMBF;
namespace MoleMole { class UIWindowController; }

#define BFDEICIPFHF_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x128A4AB0)
#define BFDEICIPFHF_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x128A4AA0)
#define BFDEICIPFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x128A4B70)

inline static constexpr unsigned int BFDEICIPFHF_TypeDefinitionIndex = 92674;

class BFDEICIPFHF : public ::DDHEGIHEKLH
{
public:
	::BFDEICIPFHF_JLCLOJIHDPO* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDEICIPFHF__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDEICIPFHF_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BFDEICIPFHF_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
