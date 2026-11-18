#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/HEDOKIMFMGK_ICEKKANHACK.h"

namespace UnityEngine { class Collider; }

#define HEDOKIMFMGK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16F2DB90)
#define HEDOKIMFMGK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16F2DBF0)
#define HEDOKIMFMGK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16F2DB00)
#define HEDOKIMFMGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F2DA80)
#define HEDOKIMFMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2DAF0)

inline static constexpr unsigned int HEDOKIMFMGK_TypeDefinitionIndex = 69488;

class HEDOKIMFMGK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x46; // 0x0
	::UnityEngine::Collider* LIBPKNHDIGP; // 0x20
	::System::UInt32 AOGNNJLKHGL; // 0x28
	::HEDOKIMFMGK_ICEKKANHACK JGKMCMONDEN; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEDOKIMFMGK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDOKIMFMGK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDOKIMFMGK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NJNCGJLHLKC, ::UnityEngine::Collider* LIBPKNHDIGP, ::HEDOKIMFMGK_ICEKKANHACK FGDPOAFBDID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Collider*, ::HEDOKIMFMGK_ICEKKANHACK))((::PBYTE)hIl2Cpp + HEDOKIMFMGK_CNHBDOMKKDE_OFFSET))(this, NJNCGJLHLKC, LIBPKNHDIGP, FGDPOAFBDID);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDOKIMFMGK_FIGPAOKNJLN_OFFSET))(this);
	}
};
