#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class IPMBEFHMAPO_PCNMHINAJBI;
namespace MoleMole { class UIWindowController; }

#define IPMBEFHMAPO_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x15C2CD90)
#define IPMBEFHMAPO_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x15C2CD80)
#define IPMBEFHMAPO__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2CE50)

inline static constexpr unsigned int IPMBEFHMAPO_TypeDefinitionIndex = 82730;

class IPMBEFHMAPO : public ::DDHEGIHEKLH
{
public:
	::IPMBEFHMAPO_PCNMHINAJBI* OBGBFHGKILC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMBEFHMAPO__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMBEFHMAPO_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IPMBEFHMAPO_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}
};
