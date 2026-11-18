#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBKFEMNJBH.h"

#define OEAOMPCDCMA_DFFPGOOAJID_OFFSET UNITYSDK_OFFSET(0x15F5F060)
#define OEAOMPCDCMA_KGBLHMHPAOG_OFFSET UNITYSDK_OFFSET(0x15F5EEF0)
#define OEAOMPCDCMA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5F050)

inline static constexpr unsigned int OEAOMPCDCMA_TypeDefinitionIndex = 58253;

class OEAOMPCDCMA : public ::FOBKFEMNJBH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAOMPCDCMA__CTOR_OFFSET))(this);
	}

	::System::Int32 KGBLHMHPAOG(::System::Int32 PJCLICDAHHB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEAOMPCDCMA_KGBLHMHPAOG_OFFSET))(this, PJCLICDAHHB);
	}

	::System::Int32 DFFPGOOAJID(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEAOMPCDCMA_DFFPGOOAJID_OFFSET))(this, MIALFKCCCPI);
	}
};
