#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCGFBJLEBMP.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define DJNHMOEJAPE_BPOLBBJIAMI_OFFSET UNITYSDK_OFFSET(0x19415C40)
#define DJNHMOEJAPE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19415B00)
#define DJNHMOEJAPE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19415D60)
#define DJNHMOEJAPE_JGABCDDFCOF_OFFSET UNITYSDK_OFFSET(0x19415C50)
#define DJNHMOEJAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19415C60)

inline static constexpr unsigned int DJNHMOEJAPE_TypeDefinitionIndex = 58309;

class DJNHMOEJAPE : public ::LCGFBJLEBMP
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* OIIECOGABLC; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNHMOEJAPE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNHMOEJAPE_FEDNEKFMGNF_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Int32>* BPOLBBJIAMI()
	{
		return ((::KCMIFNGABDC_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNHMOEJAPE_BPOLBBJIAMI_OFFSET))(this);
	}

	::CPABOPKIGAL* JGABCDDFCOF()
	{
		return ((::CPABOPKIGAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNHMOEJAPE_JGABCDDFCOF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNHMOEJAPE_GDEOPIBNOIN_OFFSET))(this);
	}
};
