#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define EEPCDGEMIKB_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x14149DA0)
#define EEPCDGEMIKB_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x14149FB0)
#define EEPCDGEMIKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14149D00)
#define EEPCDGEMIKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14149F70)

inline static constexpr unsigned int EEPCDGEMIKB_TypeDefinitionIndex = 92086;

class EEPCDGEMIKB : public ::BBKFNNHAKBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCDGEMIKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCDGEMIKB_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCDGEMIKB_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEPCDGEMIKB_KHAEIOINMBG_OFFSET))(this);
	}
};
