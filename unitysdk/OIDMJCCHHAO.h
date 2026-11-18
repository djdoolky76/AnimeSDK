#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define OIDMJCCHHAO_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x100751B0)
#define OIDMJCCHHAO_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x10075600)
#define OIDMJCCHHAO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10075110)
#define OIDMJCCHHAO__CTOR_OFFSET UNITYSDK_OFFSET(0x100755C0)

inline static constexpr unsigned int OIDMJCCHHAO_TypeDefinitionIndex = 44582;

class OIDMJCCHHAO : public ::BBKFNNHAKBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDMJCCHHAO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDMJCCHHAO_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDMJCCHHAO_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDMJCCHHAO_KHAEIOINMBG_OFFSET))(this);
	}
};
