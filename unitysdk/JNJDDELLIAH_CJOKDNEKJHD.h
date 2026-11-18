#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNJDDELLIAH_CJOKDNEKJHD_IGHOOIAIEBP_OFFSET UNITYSDK_OFFSET(0x13AE0E20)
#define JNJDDELLIAH_CJOKDNEKJHD_NPAAHGLDKIP_OFFSET UNITYSDK_OFFSET(0x13AE0E30)
#define JNJDDELLIAH_CJOKDNEKJHD__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE0E10)

inline static constexpr unsigned int JNJDDELLIAH_CJOKDNEKJHD_TypeDefinitionIndex = 52348;

class JNJDDELLIAH_CJOKDNEKJHD : public ::System::Object
{
public:
	::System::Boolean MHDAJGPGLOD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_CJOKDNEKJHD__CTOR_OFFSET))(this);
	}

	::System::Void IGHOOIAIEBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_CJOKDNEKJHD_IGHOOIAIEBP_OFFSET))(this);
	}

	::System::Boolean NPAAHGLDKIP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_CJOKDNEKJHD_NPAAHGLDKIP_OFFSET))(this);
	}
};
