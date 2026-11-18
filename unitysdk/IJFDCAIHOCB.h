#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class IJFDCAIHOCB_CEBGKGJFICK;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define IJFDCAIHOCB_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x13AA7AC0)
#define IJFDCAIHOCB_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x13AA7AB0)
#define IJFDCAIHOCB_OELABNEMBOM_OFFSET UNITYSDK_OFFSET(0x13AA7B90)
#define IJFDCAIHOCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA7B80)

inline static constexpr unsigned int IJFDCAIHOCB_TypeDefinitionIndex = 59173;

class IJFDCAIHOCB : public ::DDHEGIHEKLH
{
public:
	::IJFDCAIHOCB_CEBGKGJFICK* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDCAIHOCB__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDCAIHOCB_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + IJFDCAIHOCB_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::Transform* OELABNEMBOM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDCAIHOCB_OELABNEMBOM_OFFSET))(this);
	}
};
