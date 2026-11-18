#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAKHIFCPOKM_PPMDLNANLDP_AIJFNJIDBON_OFFSET UNITYSDK_OFFSET(0x1477C030)
#define CAKHIFCPOKM_PPMDLNANLDP_JBDEBGBJJLH_OFFSET UNITYSDK_OFFSET(0x1477C330)
#define CAKHIFCPOKM_PPMDLNANLDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1477C020)

inline static constexpr unsigned int CAKHIFCPOKM_PPMDLNANLDP_TypeDefinitionIndex = 79966;

class CAKHIFCPOKM_PPMDLNANLDP : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_PPMDLNANLDP__CTOR_OFFSET))(this);
	}

	::System::Void AIJFNJIDBON(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_PPMDLNANLDP_AIJFNJIDBON_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void JBDEBGBJJLH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_PPMDLNANLDP_JBDEBGBJJLH_OFFSET))(this, PIIPCLCCOIG);
	}
};
