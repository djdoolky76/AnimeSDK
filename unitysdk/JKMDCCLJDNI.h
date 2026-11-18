#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define JKMDCCLJDNI_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x157CCC60)
#define JKMDCCLJDNI_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x157CCF50)
#define JKMDCCLJDNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157CCBC0)
#define JKMDCCLJDNI__CTOR_OFFSET UNITYSDK_OFFSET(0x157CCF10)

inline static constexpr unsigned int JKMDCCLJDNI_TypeDefinitionIndex = 52482;

class JKMDCCLJDNI : public ::BBKFNNHAKBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMDCCLJDNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMDCCLJDNI_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMDCCLJDNI_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMDCCLJDNI_KHAEIOINMBG_OFFSET))(this);
	}
};
