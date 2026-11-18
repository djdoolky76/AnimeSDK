#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFGHMMCEKND.h"
#include "unitysdk/NHKLBKEABJB.h"

#define KAMIGMONAIL_GDNDMMCMOJC_OFFSET UNITYSDK_OFFSET(0x19489370)

inline static constexpr unsigned int KAMIGMONAIL_TypeDefinitionIndex = 93151;

class KAMIGMONAIL : public ::System::Object
{
public:
	static ::System::Void GDNDMMCMOJC(::HFGHMMCEKND& HPEMFJDOAKL, ::NHKLBKEABJB& FHIMMPKHPOJ)
	{
		return ((::System::Void(*)(::HFGHMMCEKND&, ::NHKLBKEABJB&))((::PBYTE)hIl2Cpp + KAMIGMONAIL_GDNDMMCMOJC_OFFSET))(HPEMFJDOAKL, FHIMMPKHPOJ);
	}
};
