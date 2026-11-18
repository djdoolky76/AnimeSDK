#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PFLCMLMFHGL_FNAHJPJMIHM;
namespace MoleMole { class UIWindowController; }

#define PFLCMLMFHGL_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x17325FB0)
#define PFLCMLMFHGL_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x17325FA0)
#define PFLCMLMFHGL__CTOR_OFFSET UNITYSDK_OFFSET(0x17326070)

inline static constexpr unsigned int PFLCMLMFHGL_TypeDefinitionIndex = 57448;

class PFLCMLMFHGL : public ::DDHEGIHEKLH
{
public:
	::PFLCMLMFHGL_FNAHJPJMIHM* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLCMLMFHGL__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLCMLMFHGL_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PFLCMLMFHGL_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
