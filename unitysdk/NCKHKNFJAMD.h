#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NCKHKNFJAMD_NEFEFFMACFD;
namespace MoleMole { class UIWindowController; }
namespace MoleMole { class UIZenkovErosionProgressWidgetController; }

#define NCKHKNFJAMD_FOPLPAMBLDM_OFFSET UNITYSDK_OFFSET(0x18FAEE40)
#define NCKHKNFJAMD_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x18FAEBF0)
#define NCKHKNFJAMD_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x18FAEBE0)
#define NCKHKNFJAMD_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x18FAECB0)
#define NCKHKNFJAMD_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x18FAF010)
#define NCKHKNFJAMD__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAEE30)

inline static constexpr unsigned int NCKHKNFJAMD_TypeDefinitionIndex = 61835;

class NCKHKNFJAMD : public ::DDHEGIHEKLH
{
public:
	::NCKHKNFJAMD_NEFEFFMACFD* OBGBFHGKILC; // 0x28
	::MoleMole::UIZenkovErosionProgressWidgetController* JPIGEKHOPIH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FOPLPAMBLDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_FOPLPAMBLDM_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKHKNFJAMD_IFHNMAGGFAE_OFFSET))(this);
	}
};
