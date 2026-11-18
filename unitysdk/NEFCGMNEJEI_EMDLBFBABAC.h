#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class AINLDBCGKOO;
class IJLOBIGIEDO;
class KFHNCJALFJK;
class NEFCGMNEJEI_DAGKFKHLNJK;
namespace System { template <typename T> class Func_1; }

#define NEFCGMNEJEI_EMDLBFBABAC_GDHCONJBMHP_OFFSET UNITYSDK_OFFSET(0x11F6FAD0)
#define NEFCGMNEJEI_EMDLBFBABAC_NPIBLOPJCNE_OFFSET UNITYSDK_OFFSET(0x11F6FCD0)
#define NEFCGMNEJEI_EMDLBFBABAC_OBPPPHKGFGM_OFFSET UNITYSDK_OFFSET(0x11F6EEF0)
#define NEFCGMNEJEI_EMDLBFBABAC__CTOR_OFFSET UNITYSDK_OFFSET(0x11F6EEE0)

inline static constexpr unsigned int NEFCGMNEJEI_EMDLBFBABAC_TypeDefinitionIndex = 49001;

class NEFCGMNEJEI_EMDLBFBABAC : public ::System::Object
{
public:
	::AINLDBCGKOO* ANIHNDJMDFG; // 0x10
	::NEFCGMNEJEI_DAGKFKHLNJK* MNBBHODKFDM; // 0x18
	::System::Func_1<::System::Boolean>* FFMGICPLKFB; // 0x20
	::KFHNCJALFJK* ADEDEAIPOLH; // 0x28
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x30
	::IJLOBIGIEDO* NPOFKGDDHEM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_EMDLBFBABAC__CTOR_OFFSET))(this);
	}

	::System::Boolean OBPPPHKGFGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_EMDLBFBABAC_OBPPPHKGFGM_OFFSET))(this);
	}

	::System::Void GDHCONJBMHP(::System::Int32 BCCENALHBHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_EMDLBFBABAC_GDHCONJBMHP_OFFSET))(this, BCCENALHBHL);
	}

	::System::Boolean NPIBLOPJCNE(::System::Int32 BCCENALHBHL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_EMDLBFBABAC_NPIBLOPJCNE_OFFSET))(this, BCCENALHBHL);
	}
};
