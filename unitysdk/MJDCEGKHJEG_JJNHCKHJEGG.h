#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFCOBINBOMF;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_JJNHCKHJEGG_AFHAJJPINMK_OFFSET UNITYSDK_OFFSET(0x1075C510)
#define MJDCEGKHJEG_JJNHCKHJEGG_EOOHLIGKNPK_OFFSET UNITYSDK_OFFSET(0x1075C580)
#define MJDCEGKHJEG_JJNHCKHJEGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1075C500)

inline static constexpr unsigned int MJDCEGKHJEG_JJNHCKHJEGG_TypeDefinitionIndex = 56431;

class MJDCEGKHJEG_JJNHCKHJEGG : public ::System::Object
{
public:
	::System::Action_1<::AFCOBINBOMF*>* OLBAKFLBNIG; // 0x10
	::System::Action_1<::AFCOBINBOMF*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JJNHCKHJEGG__CTOR_OFFSET))(this);
	}

	::System::Void AFHAJJPINMK(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JJNHCKHJEGG_AFHAJJPINMK_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void EOOHLIGKNPK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_JJNHCKHJEGG_EOOHLIGKNPK_OFFSET))(this, GLAOEHCGCFO);
	}
};
