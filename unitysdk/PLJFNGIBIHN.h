#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFJFOOPBBFO.h"
#include "unitysdk/MIAALDIJIOB.h"
#include "unitysdk/System/Object.h"

#define PLJFNGIBIHN_DKJCHBFJKBJ_OFFSET UNITYSDK_OFFSET(0x1D9D33F0)

inline static constexpr unsigned int PLJFNGIBIHN_TypeDefinitionIndex = 38896;

class PLJFNGIBIHN : public ::System::Object
{
public:
	static ::LFJFOOPBBFO DKJCHBFJKBJ(::MIAALDIJIOB MGMDLMBEDJF)
	{
		return ((::LFJFOOPBBFO(*)(::MIAALDIJIOB))((::PBYTE)hIl2Cpp + PLJFNGIBIHN_DKJCHBFJKBJ_OFFSET))(MGMDLMBEDJF);
	}
};
