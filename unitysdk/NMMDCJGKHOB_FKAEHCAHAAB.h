#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_FKAEHCAHAAB_CGLCFHCPACC_OFFSET UNITYSDK_OFFSET(0x11F89130)
#define NMMDCJGKHOB_FKAEHCAHAAB_DHNCCGFIDKP_OFFSET UNITYSDK_OFFSET(0x11F89120)
#define NMMDCJGKHOB_FKAEHCAHAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F89110)

inline static constexpr unsigned int NMMDCJGKHOB_FKAEHCAHAAB_TypeDefinitionIndex = 54820;

class NMMDCJGKHOB_FKAEHCAHAAB : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_FKAEHCAHAAB__CTOR_OFFSET))(this);
	}

	::System::Void DHNCCGFIDKP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_FKAEHCAHAAB_DHNCCGFIDKP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void CGLCFHCPACC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_FKAEHCAHAAB_CGLCFHCPACC_OFFSET))(this, PIIPCLCCOIG);
	}
};
