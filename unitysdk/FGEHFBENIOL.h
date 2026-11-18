#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLHFONBEAAN;

#define FGEHFBENIOL_NLLDEFDDHOL_OFFSET UNITYSDK_OFFSET(0x11D761B0)

inline static constexpr unsigned int FGEHFBENIOL_TypeDefinitionIndex = 64687;

class FGEHFBENIOL : public ::System::Object
{
public:
	static ::OLHFONBEAAN* NLLDEFDDHOL(::System::Int32 DGLECNMAJHE)
	{
		return ((::OLHFONBEAAN*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FGEHFBENIOL_NLLDEFDDHOL_OFFSET))(DGLECNMAJHE);
	}
};
