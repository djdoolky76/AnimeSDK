#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;

#define OMKLKJDAFII_CENFPCGAPKE_OFFSET UNITYSDK_OFFSET(0x16F86410)
#define OMKLKJDAFII_JOBKKDCOBJE_OFFSET UNITYSDK_OFFSET(0x16F86530)

inline static constexpr unsigned int OMKLKJDAFII_TypeDefinitionIndex = 90234;

class OMKLKJDAFII : public ::System::Object
{
public:
	static ::System::Void CENFPCGAPKE(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OMKLKJDAFII_CENFPCGAPKE_OFFSET))(BKBGPKNGNMF);
	}

	static ::System::Void JOBKKDCOBJE(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + OMKLKJDAFII_JOBKKDCOBJE_OFFSET))(MHPNGBGGMMN, FFNKDGGHBPP);
	}
};
