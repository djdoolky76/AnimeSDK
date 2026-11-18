#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMJMHMDFLK.h"
#include "unitysdk/System/Object.h"

#define HDGCGOFCNKP_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1E238250)

inline static constexpr unsigned int HDGCGOFCNKP_TypeDefinitionIndex = 93879;

class HDGCGOFCNKP : public ::System::Object
{
public:
	static ::System::Boolean FCFOEJGPDNO(::System::Int32 NJFDGECNDNC, ::BIMJMHMDFLK FAMMCEJDLFE, ::System::Int32 PKHPPCCOKOM)
	{
		return ((::System::Boolean(*)(::System::Int32, ::BIMJMHMDFLK, ::System::Int32))((::PBYTE)hIl2Cpp + HDGCGOFCNKP_FCFOEJGPDNO_OFFSET))(NJFDGECNDNC, FAMMCEJDLFE, PKHPPCCOKOM);
	}
};
