#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLJJDEDOIPK.h"
#include "unitysdk/System/Object.h"

#define AKOLEELPBCN_FAFFBNHHOEB_OFFSET UNITYSDK_OFFSET(0x12665E40)

inline static constexpr unsigned int AKOLEELPBCN_TypeDefinitionIndex = 81725;

class AKOLEELPBCN : public ::System::Object
{
public:
	static ::System::Boolean FAFFBNHHOEB(::GLJJDEDOIPK EGEGIMGMJHN, ::GLJJDEDOIPK FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::GLJJDEDOIPK, ::GLJJDEDOIPK))((::PBYTE)hIl2Cpp + AKOLEELPBCN_FAFFBNHHOEB_OFFSET))(EGEGIMGMJHN, FCPCLIJNDLA);
	}
};
