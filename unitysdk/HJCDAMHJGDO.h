#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKMBGAKABL.h"

class BCCMPEIHJMN_CAICKFLHNGI;

#define HJCDAMHJGDO_NGGBDJHLPBK_OFFSET UNITYSDK_OFFSET(0x140BA7D0)
#define HJCDAMHJGDO_PGPHACKPOBD_OFFSET UNITYSDK_OFFSET(0x140BA6E0)
#define HJCDAMHJGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x140BA690)

inline static constexpr unsigned int HJCDAMHJGDO_TypeDefinitionIndex = 68420;

class HJCDAMHJGDO : public ::HCKMBGAKABL
{
public:
	::System::Void _ctor(::BCCMPEIHJMN_CAICKFLHNGI* HHEOJLBHEGI)
	{
		return ((::System::Void(*)(::PVOID, ::BCCMPEIHJMN_CAICKFLHNGI*))((::PBYTE)hIl2Cpp + HJCDAMHJGDO__CTOR_OFFSET))(this, HHEOJLBHEGI);
	}

	::System::Void PGPHACKPOBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDAMHJGDO_PGPHACKPOBD_OFFSET))(this);
	}

	::System::Void NGGBDJHLPBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCDAMHJGDO_NGGBDJHLPBK_OFFSET))(this);
	}
};
