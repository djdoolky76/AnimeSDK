#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class ECKNPANIODE_NLHKIMKOCLN;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define ECKNPANIODE_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x172247F0)
#define ECKNPANIODE_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x17224720)
#define ECKNPANIODE_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x17224710)
#define ECKNPANIODE__CTOR_OFFSET UNITYSDK_OFFSET(0x172247E0)

inline static constexpr unsigned int ECKNPANIODE_TypeDefinitionIndex = 57109;

class ECKNPANIODE : public ::DDHEGIHEKLH
{
public:
	::ECKNPANIODE_NLHKIMKOCLN* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKNPANIODE__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKNPANIODE_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + ECKNPANIODE_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::Transform* FJOLPGBLBBH()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKNPANIODE_FJOLPGBLBBH_OFFSET))(this);
	}
};
