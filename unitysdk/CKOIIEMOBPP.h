#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define CKOIIEMOBPP_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x169679F0)
#define CKOIIEMOBPP_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x16967B80)
#define CKOIIEMOBPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16967820)
#define CKOIIEMOBPP__CTOR_OFFSET UNITYSDK_OFFSET(0x16967B40)

inline static constexpr unsigned int CKOIIEMOBPP_TypeDefinitionIndex = 62580;

class CKOIIEMOBPP : public ::BBKFNNHAKBP
{
public:
	::System::Int32 BFDKDPFAJGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOIIEMOBPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOIIEMOBPP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOIIEMOBPP_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOIIEMOBPP_KHAEIOINMBG_OFFSET))(this);
	}
};
