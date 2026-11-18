#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class String; }

#define ONABGDELNND_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x17897EA0)
#define ONABGDELNND_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x17898130)
#define ONABGDELNND_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17897CD0)
#define ONABGDELNND__CTOR_OFFSET UNITYSDK_OFFSET(0x178980E0)

inline static constexpr unsigned int ONABGDELNND_TypeDefinitionIndex = 41284;

class ONABGDELNND : public ::BBKFNNHAKBP
{
public:
	::System::String* BDLLBBPCPEO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONABGDELNND__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONABGDELNND_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONABGDELNND_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONABGDELNND_KHAEIOINMBG_OFFSET))(this);
	}
};
