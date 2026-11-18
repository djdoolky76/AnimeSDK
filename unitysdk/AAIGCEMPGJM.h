#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class AAIGCEMPGJM_CABOKIHEDKH;
class BHECBBCIMBF;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class GameObject; }

#define AAIGCEMPGJM_CONFIKJMBFM_OFFSET UNITYSDK_OFFSET(0x164330A0)
#define AAIGCEMPGJM_FGFANCJLJLC_OFFSET UNITYSDK_OFFSET(0x16433040)
#define AAIGCEMPGJM_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x16432F70)
#define AAIGCEMPGJM_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x16432F60)
#define AAIGCEMPGJM__CTOR_OFFSET UNITYSDK_OFFSET(0x16433030)

inline static constexpr unsigned int AAIGCEMPGJM_TypeDefinitionIndex = 78189;

class AAIGCEMPGJM : public ::DDHEGIHEKLH
{
public:
	::AAIGCEMPGJM_CABOKIHEDKH* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGCEMPGJM__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGCEMPGJM_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + AAIGCEMPGJM_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::GameObject* FGFANCJLJLC()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGCEMPGJM_FGFANCJLJLC_OFFSET))(this);
	}

	::UnityEngine::GameObject* CONFIKJMBFM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAIGCEMPGJM_CONFIKJMBFM_OFFSET))(this);
	}
};
