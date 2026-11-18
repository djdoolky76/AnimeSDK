#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define GPOJGBOMBKJ_FOFBDCLDMJF_KGDOOIJNICF_OFFSET UNITYSDK_OFFSET(0x181691F0)
#define GPOJGBOMBKJ_FOFBDCLDMJF_LABMKKMHCCK_OFFSET UNITYSDK_OFFSET(0x181691E0)
#define GPOJGBOMBKJ_FOFBDCLDMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x181691D0)

inline static constexpr unsigned int GPOJGBOMBKJ_FOFBDCLDMJF_TypeDefinitionIndex = 46921;

class GPOJGBOMBKJ_FOFBDCLDMJF : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_FOFBDCLDMJF__CTOR_OFFSET))(this);
	}

	::System::Void LABMKKMHCCK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_FOFBDCLDMJF_LABMKKMHCCK_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KGDOOIJNICF(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_FOFBDCLDMJF_KGDOOIJNICF_OFFSET))(this, JMFEPDAHBED);
	}
};
