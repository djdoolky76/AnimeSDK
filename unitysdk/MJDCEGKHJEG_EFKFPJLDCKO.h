#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAJBMJICIPG;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_EFKFPJLDCKO_OIJADJGALPI_OFFSET UNITYSDK_OFFSET(0x13191020)
#define MJDCEGKHJEG_EFKFPJLDCKO_PNCBCOBKNBF_OFFSET UNITYSDK_OFFSET(0x13190FB0)
#define MJDCEGKHJEG_EFKFPJLDCKO__CTOR_OFFSET UNITYSDK_OFFSET(0x13190FA0)

inline static constexpr unsigned int MJDCEGKHJEG_EFKFPJLDCKO_TypeDefinitionIndex = 56411;

class MJDCEGKHJEG_EFKFPJLDCKO : public ::System::Object
{
public:
	::System::Action_1<::IAJBMJICIPG*>* OLBAKFLBNIG; // 0x10
	::System::Action_1<::IAJBMJICIPG*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_EFKFPJLDCKO__CTOR_OFFSET))(this);
	}

	::System::Void PNCBCOBKNBF(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_EFKFPJLDCKO_PNCBCOBKNBF_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void OIJADJGALPI(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_EFKFPJLDCKO_OIJADJGALPI_OFFSET))(this, JCHFKGGDDFB);
	}
};
