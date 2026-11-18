#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_MJGKBMBLBGH_INGNGFACPOB_OFFSET UNITYSDK_OFFSET(0x172CC380)
#define OIPAFACEMMK_MJGKBMBLBGH_PJGMINDHPEA_OFFSET UNITYSDK_OFFSET(0x172CC330)
#define OIPAFACEMMK_MJGKBMBLBGH__CTOR_OFFSET UNITYSDK_OFFSET(0x172CC320)

inline static constexpr unsigned int OIPAFACEMMK_MJGKBMBLBGH_TypeDefinitionIndex = 40840;

class OIPAFACEMMK_MJGKBMBLBGH : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* DJCNCELJPOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_MJGKBMBLBGH__CTOR_OFFSET))(this);
	}

	::System::Void PJGMINDHPEA(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_MJGKBMBLBGH_PJGMINDHPEA_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void INGNGFACPOB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_MJGKBMBLBGH_INGNGFACPOB_OFFSET))(this, PIIPCLCCOIG);
	}
};
