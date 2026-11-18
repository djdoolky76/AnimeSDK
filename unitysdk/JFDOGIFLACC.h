#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/JFDOGIFLACC_CALEHKPALHK.h"

namespace UnityEngine { class Collider; }

#define JFDOGIFLACC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x165A1EE0)
#define JFDOGIFLACC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x165A1E50)
#define JFDOGIFLACC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x165A1DC0)
#define JFDOGIFLACC__CCTOR_OFFSET UNITYSDK_OFFSET(0x165A1D40)
#define JFDOGIFLACC__CTOR_OFFSET UNITYSDK_OFFSET(0x165A1DB0)

inline static constexpr unsigned int JFDOGIFLACC_TypeDefinitionIndex = 39233;

class JFDOGIFLACC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x45; // 0x0
	::UnityEngine::Collider* LIBPKNHDIGP; // 0x20
	::JFDOGIFLACC_CALEHKPALHK JGKMCMONDEN; // 0x28
	::System::UInt32 AOGNNJLKHGL; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDOGIFLACC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOGIFLACC__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOGIFLACC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDOGIFLACC_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NJNCGJLHLKC, ::UnityEngine::Collider* LIBPKNHDIGP, ::JFDOGIFLACC_CALEHKPALHK FGDPOAFBDID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Collider*, ::JFDOGIFLACC_CALEHKPALHK))((::PBYTE)hIl2Cpp + JFDOGIFLACC_CNHBDOMKKDE_OFFSET))(this, NJNCGJLHLKC, LIBPKNHDIGP, FGDPOAFBDID);
	}
};
