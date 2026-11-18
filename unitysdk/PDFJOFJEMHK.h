#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class PDFJOFJEMHK_OICKOICHHNO;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define PDFJOFJEMHK_CMMDCBAONPO_OFFSET UNITYSDK_OFFSET(0x1A7E68E0)
#define PDFJOFJEMHK_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x1A7E6810)
#define PDFJOFJEMHK_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x1A7E6800)
#define PDFJOFJEMHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E68D0)

inline static constexpr unsigned int PDFJOFJEMHK_TypeDefinitionIndex = 48054;

class PDFJOFJEMHK : public ::DDHEGIHEKLH
{
public:
	::PDFJOFJEMHK_OICKOICHHNO* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFJOFJEMHK__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFJOFJEMHK_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PDFJOFJEMHK_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::Transform* CMMDCBAONPO()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFJOFJEMHK_CMMDCBAONPO_OFFSET))(this);
	}
};
