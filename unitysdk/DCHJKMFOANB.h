#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define DCHJKMFOANB_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x18329700)
#define DCHJKMFOANB_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x183299D0)
#define DCHJKMFOANB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18329450)
#define DCHJKMFOANB__CTOR_OFFSET UNITYSDK_OFFSET(0x18329990)

inline static constexpr unsigned int DCHJKMFOANB_TypeDefinitionIndex = 67033;

class DCHJKMFOANB : public ::BBKFNNHAKBP
{
public:
	::System::Int32 BDIPBEDGGFH; // 0x38
	::System::Int32 BOHBDHAPLDN; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHJKMFOANB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHJKMFOANB_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHJKMFOANB_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHJKMFOANB_KHAEIOINMBG_OFFSET))(this);
	}
};
