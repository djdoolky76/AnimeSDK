#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define JGGNEIJLPFF_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x13ACEBC0)
#define JGGNEIJLPFF_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x13ACED90)
#define JGGNEIJLPFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ACE9A0)
#define JGGNEIJLPFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACED50)

inline static constexpr unsigned int JGGNEIJLPFF_TypeDefinitionIndex = 84017;

class JGGNEIJLPFF : public ::BBKFNNHAKBP
{
public:
	::System::Int32 LFNLOLPIBPF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNEIJLPFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNEIJLPFF_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNEIJLPFF_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGNEIJLPFF_KHAEIOINMBG_OFFSET))(this);
	}
};
