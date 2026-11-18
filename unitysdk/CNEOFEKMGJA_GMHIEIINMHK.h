#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class CNEOFEKMGJA;

#define CNEOFEKMGJA_GMHIEIINMHK_CKHKIPLAJCM_OFFSET UNITYSDK_OFFSET(0x193E9970)
#define CNEOFEKMGJA_GMHIEIINMHK_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x193E99D0)
#define CNEOFEKMGJA_GMHIEIINMHK_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x193E99A0)
#define CNEOFEKMGJA_GMHIEIINMHK__CTOR_OFFSET UNITYSDK_OFFSET(0x193E9960)

inline static constexpr unsigned int CNEOFEKMGJA_GMHIEIINMHK_TypeDefinitionIndex = 50084;

class CNEOFEKMGJA_GMHIEIINMHK : public ::System::Object
{
public:
	::AFMMAIKKACF* AAOCANGHBDG; // 0x10
	::CNEOFEKMGJA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEOFEKMGJA_GMHIEIINMHK__CTOR_OFFSET))(this);
	}

	::System::Void CKHKIPLAJCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEOFEKMGJA_GMHIEIINMHK_CKHKIPLAJCM_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEOFEKMGJA_GMHIEIINMHK_PEJFEPJJDMI_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEOFEKMGJA_GMHIEIINMHK_MJMKFFANPBL_OFFSET))(this);
	}
};
