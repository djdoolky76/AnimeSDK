#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define JACKMJCLFEL_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0xF887980)
#define JACKMJCLFEL_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0xF887D70)
#define JACKMJCLFEL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF887760)
#define JACKMJCLFEL__CTOR_OFFSET UNITYSDK_OFFSET(0xF887D30)

inline static constexpr unsigned int JACKMJCLFEL_TypeDefinitionIndex = 55834;

class JACKMJCLFEL : public ::BBKFNNHAKBP
{
public:
	::System::Int32 EAPKKGDLBLE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKMJCLFEL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKMJCLFEL_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKMJCLFEL_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACKMJCLFEL_KHAEIOINMBG_OFFSET))(this);
	}
};
