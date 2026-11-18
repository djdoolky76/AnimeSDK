#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HJJEDOLCGOH_HBDNHOJDMGH_ANHFAKMEKEI_OFFSET UNITYSDK_OFFSET(0x17E4E410)
#define HJJEDOLCGOH_HBDNHOJDMGH_LOPPGLJDFBL_OFFSET UNITYSDK_OFFSET(0x17E4E3F0)
#define HJJEDOLCGOH_HBDNHOJDMGH__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E3E0)

inline static constexpr unsigned int HJJEDOLCGOH_HBDNHOJDMGH_TypeDefinitionIndex = 87726;

class HJJEDOLCGOH_HBDNHOJDMGH : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* KNBNGDOFIID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_HBDNHOJDMGH__CTOR_OFFSET))(this);
	}

	::System::Void LOPPGLJDFBL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_HBDNHOJDMGH_LOPPGLJDFBL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ANHFAKMEKEI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH_HBDNHOJDMGH_ANHFAKMEKEI_OFFSET))(this, PIIPCLCCOIG);
	}
};
