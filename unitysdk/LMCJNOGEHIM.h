#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

class MDLKEKANMHL;

#define LMCJNOGEHIM_DBPAICLLCIL_OFFSET UNITYSDK_OFFSET(0x140300D0)

inline static constexpr unsigned int LMCJNOGEHIM_TypeDefinitionIndex = 69754;

class LMCJNOGEHIM : public ::System::Object
{
public:
	static ::Foundation::ViewObject::ViewObjectHandle DBPAICLLCIL(::MDLKEKANMHL* MHPNGBGGMMN)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + LMCJNOGEHIM_DBPAICLLCIL_OFFSET))(MHPNGBGGMMN);
	}
};
