#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIFBCHGBCBC.h"

class IBENDELLLAO;

#define GJJIEPGCBHI_EPDENNMNOMK_OFFSET UNITYSDK_OFFSET(0x10FE4AC0)

inline static constexpr unsigned int GJJIEPGCBHI_TypeDefinitionIndex = 78702;

class GJJIEPGCBHI : public ::System::Object
{
public:
	static ::PIFBCHGBCBC EPDENNMNOMK(::IBENDELLLAO* HHIJHDFHPOI, ::System::Boolean JCFPKNCPIMP)
	{
		return ((::PIFBCHGBCBC(*)(::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJJIEPGCBHI_EPDENNMNOMK_OFFSET))(HHIJHDFHPOI, JCFPKNCPIMP);
	}
};
