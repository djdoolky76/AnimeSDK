#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJDCEGKHJEG_MJLENGBPAAA_GOADNBMHOAM_OFFSET UNITYSDK_OFFSET(0x12D8E9F0)
#define MJDCEGKHJEG_MJLENGBPAAA_JFIAADDHLGH_OFFSET UNITYSDK_OFFSET(0x12D8E7A0)
#define MJDCEGKHJEG_MJLENGBPAAA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8E790)

inline static constexpr unsigned int MJDCEGKHJEG_MJLENGBPAAA_TypeDefinitionIndex = 56447;

class MJDCEGKHJEG_MJLENGBPAAA : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_MJLENGBPAAA__CTOR_OFFSET))(this);
	}

	::System::Void JFIAADDHLGH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_MJLENGBPAAA_JFIAADDHLGH_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GOADNBMHOAM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_MJLENGBPAAA_GOADNBMHOAM_OFFSET))(this, BHDNBGLCNOM);
	}
};
