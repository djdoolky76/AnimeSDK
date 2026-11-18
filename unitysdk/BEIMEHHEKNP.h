#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJKOCFFMLFB.h"
#include "unitysdk/System/Object.h"

#define BEIMEHHEKNP_FAFFBNHHOEB_OFFSET UNITYSDK_OFFSET(0x1822F570)

inline static constexpr unsigned int BEIMEHHEKNP_TypeDefinitionIndex = 86270;

class BEIMEHHEKNP : public ::System::Object
{
public:
	static ::System::Boolean FAFFBNHHOEB(::PJKOCFFMLFB EGEGIMGMJHN, ::PJKOCFFMLFB FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PJKOCFFMLFB, ::PJKOCFFMLFB))((::PBYTE)hIl2Cpp + BEIMEHHEKNP_FAFFBNHHOEB_OFFSET))(EGEGIMGMJHN, FCPCLIJNDLA);
	}
};
