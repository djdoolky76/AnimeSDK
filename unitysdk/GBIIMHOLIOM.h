#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;

#define GBIIMHOLIOM_CENFPCGAPKE_OFFSET UNITYSDK_OFFSET(0x15CD0C00)
#define GBIIMHOLIOM_LMGAFINNBNG_OFFSET UNITYSDK_OFFSET(0x15CD0950)

inline static constexpr unsigned int GBIIMHOLIOM_TypeDefinitionIndex = 70444;

class GBIIMHOLIOM : public ::System::Object
{
public:
	static ::System::Void LMGAFINNBNG(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GBIIMHOLIOM_LMGAFINNBNG_OFFSET))(MHPNGBGGMMN, FFNKDGGHBPP);
	}

	static ::System::Void CENFPCGAPKE(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GBIIMHOLIOM_CENFPCGAPKE_OFFSET))(BKBGPKNGNMF);
	}
};
