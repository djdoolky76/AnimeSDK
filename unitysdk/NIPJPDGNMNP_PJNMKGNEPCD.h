#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NIPJPDGNMNP_PJNMKGNEPCD_LHGOMCFMOCA_OFFSET UNITYSDK_OFFSET(0x12108A30)
#define NIPJPDGNMNP_PJNMKGNEPCD_NMHJAHMOPDF_OFFSET UNITYSDK_OFFSET(0x12108A40)
#define NIPJPDGNMNP_PJNMKGNEPCD__CTOR_OFFSET UNITYSDK_OFFSET(0x12108A20)

inline static constexpr unsigned int NIPJPDGNMNP_PJNMKGNEPCD_TypeDefinitionIndex = 69474;

class NIPJPDGNMNP_PJNMKGNEPCD : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPJPDGNMNP_PJNMKGNEPCD__CTOR_OFFSET))(this);
	}

	::System::Void LHGOMCFMOCA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NIPJPDGNMNP_PJNMKGNEPCD_LHGOMCFMOCA_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void NMHJAHMOPDF(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NIPJPDGNMNP_PJNMKGNEPCD_NMHJAHMOPDF_OFFSET))(this, JMFEPDAHBED);
	}
};
