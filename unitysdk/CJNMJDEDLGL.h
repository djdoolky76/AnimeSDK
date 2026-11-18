#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIEGNGFJHEE.h"
#include "unitysdk/OMDCIDACGOE.h"
#include "unitysdk/System/Object.h"

#define CJNMJDEDLGL_AMGBGFDJNFG_1_OFFSET UNITYSDK_OFFSET(0x19712700)
#define CJNMJDEDLGL_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0x197126C0)

inline static constexpr unsigned int CJNMJDEDLGL_TypeDefinitionIndex = 74047;

class CJNMJDEDLGL : public ::System::Object
{
public:
	static ::System::Boolean AMGBGFDJNFG(::CIEGNGFJHEE JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::CIEGNGFJHEE))((::PBYTE)hIl2Cpp + CJNMJDEDLGL_AMGBGFDJNFG_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean AMGBGFDJNFG_1(::OMDCIDACGOE JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::OMDCIDACGOE))((::PBYTE)hIl2Cpp + CJNMJDEDLGL_AMGBGFDJNFG_1_OFFSET))(JKBLDFBGBPK);
	}
};
