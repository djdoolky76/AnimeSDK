#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T1, typename T2> class ELKFEFPPPFL_2;

#define IBHGDJGJLEI_OEGMBNGFOAD_BLOCCKBBOOK_OFFSET UNITYSDK_OFFSET(0x16F57B70)
#define IBHGDJGJLEI_OEGMBNGFOAD_GCIEIIEFDGP_OFFSET UNITYSDK_OFFSET(0x16F57B60)
#define IBHGDJGJLEI_OEGMBNGFOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F57B50)

inline static constexpr unsigned int IBHGDJGJLEI_OEGMBNGFOAD_TypeDefinitionIndex = 55778;

class IBHGDJGJLEI_OEGMBNGFOAD : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::ELKFEFPPPFL_2<::System::UInt32, ::System::UInt32>*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OEGMBNGFOAD__CTOR_OFFSET))(this);
	}

	::System::Void GCIEIIEFDGP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OEGMBNGFOAD_GCIEIIEFDGP_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BLOCCKBBOOK(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OEGMBNGFOAD_BLOCCKBBOOK_OFFSET))(this, GLAOEHCGCFO);
	}
};
