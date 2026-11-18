#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"

#define OMCOLLNLEDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF19CEC0)
#define OMCOLLNLEDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF19CDE0)
#define OMCOLLNLEDE__CTOR_OFFSET UNITYSDK_OFFSET(0xF19CE40)

inline static constexpr unsigned int OMCOLLNLEDE_TypeDefinitionIndex = 87301;

class OMCOLLNLEDE : public ::LFDDLEHKGIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCOLLNLEDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCOLLNLEDE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCOLLNLEDE_ECNOGHHOPPF_OFFSET))(this);
	}
};
