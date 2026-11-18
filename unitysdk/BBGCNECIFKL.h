#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BBGCNECIFKL_IPALKNDAHJH;
class BHECBBCIMBF;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define BBGCNECIFKL_CHOFNFCPDKI_OFFSET UNITYSDK_OFFSET(0xF787B80)
#define BBGCNECIFKL_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0xF787AB0)
#define BBGCNECIFKL_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0xF787AA0)
#define BBGCNECIFKL_LOIBCPGMJDG_OFFSET UNITYSDK_OFFSET(0xF787BE0)
#define BBGCNECIFKL__CTOR_OFFSET UNITYSDK_OFFSET(0xF787B70)

inline static constexpr unsigned int BBGCNECIFKL_TypeDefinitionIndex = 61904;

class BBGCNECIFKL : public ::DDHEGIHEKLH
{
public:
	::BBGCNECIFKL_IPALKNDAHJH* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGCNECIFKL__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGCNECIFKL_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + BBGCNECIFKL_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::Transform* CHOFNFCPDKI()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGCNECIFKL_CHOFNFCPDKI_OFFSET))(this);
	}

	::UnityEngine::Transform* LOIBCPGMJDG()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGCNECIFKL_LOIBCPGMJDG_OFFSET))(this);
	}
};
