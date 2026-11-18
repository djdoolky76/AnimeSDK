#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NJBDPJKACLH_ABGBDFHOCBJ;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define NJBDPJKACLH_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x105BC150)
#define NJBDPJKACLH_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x105BC140)
#define NJBDPJKACLH_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x105BC2F0)
#define NJBDPJKACLH_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x105BC210)
#define NJBDPJKACLH__CTOR_OFFSET UNITYSDK_OFFSET(0x105BC2E0)

inline static constexpr unsigned int NJBDPJKACLH_TypeDefinitionIndex = 89096;

class NJBDPJKACLH : public ::DDHEGIHEKLH
{
public:
	::NJBDPJKACLH_ABGBDFHOCBJ* OBGBFHGKILC; // 0x28
	::MoleMole::UIInLevelGuideChildWindowController* JGHLDPKAMNG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBDPJKACLH__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBDPJKACLH_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NJBDPJKACLH_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBDPJKACLH_PGGAOMNFHJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBDPJKACLH_MBDFANLLCHK_OFFSET))(this);
	}
};
