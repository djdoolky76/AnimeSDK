#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACLPGPPIJHB.h"
#include "unitysdk/PFMMNLGNNEF.h"

class DPOBIJKDLJI;
class KGBFLHNJHHN;

#define DBKBBMANGEI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB776E0)
#define DBKBBMANGEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB776D0)

inline static constexpr unsigned int DBKBBMANGEI_TypeDefinitionIndex = 93809;

class DBKBBMANGEI : public ::ACLPGPPIJHB
{
public:
	::System::Void _ctor(::PFMMNLGNNEF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PFMMNLGNNEF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DBKBBMANGEI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::DPOBIJKDLJI* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::DPOBIJKDLJI*))((::PBYTE)hIl2Cpp + DBKBBMANGEI_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
