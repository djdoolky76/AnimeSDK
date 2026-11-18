#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGHEAHILGP.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define EIFKEDIPOLO_BPOLBBJIAMI_OFFSET UNITYSDK_OFFSET(0xF9D0580)
#define EIFKEDIPOLO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9D0440)
#define EIFKEDIPOLO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9D06A0)
#define EIFKEDIPOLO_JGABCDDFCOF_OFFSET UNITYSDK_OFFSET(0xF9D0590)
#define EIFKEDIPOLO__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D05A0)

inline static constexpr unsigned int EIFKEDIPOLO_TypeDefinitionIndex = 80043;

class EIFKEDIPOLO : public ::DIGHEAHILGP
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OIIECOGABLC; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFKEDIPOLO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFKEDIPOLO_FEDNEKFMGNF_OFFSET))(this);
	}

	::KCMIFNGABDC_1<::System::Int32>* BPOLBBJIAMI()
	{
		return ((::KCMIFNGABDC_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFKEDIPOLO_BPOLBBJIAMI_OFFSET))(this);
	}

	::CPABOPKIGAL* JGABCDDFCOF()
	{
		return ((::CPABOPKIGAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFKEDIPOLO_JGABCDDFCOF_OFFSET))(this);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFKEDIPOLO_GDEOPIBNOIN_OFFSET))(this);
	}
};
