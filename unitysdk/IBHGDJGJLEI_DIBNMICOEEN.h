#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHGDGEOJGAK;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_DIBNMICOEEN_BFMCEPEEPJC_OFFSET UNITYSDK_OFFSET(0x165606F0)
#define IBHGDJGJLEI_DIBNMICOEEN_IPBJKCKBHJB_OFFSET UNITYSDK_OFFSET(0x16560680)
#define IBHGDJGJLEI_DIBNMICOEEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16560670)

inline static constexpr unsigned int IBHGDJGJLEI_DIBNMICOEEN_TypeDefinitionIndex = 55797;

class IBHGDJGJLEI_DIBNMICOEEN : public ::System::Object
{
public:
	::System::Action_1<::GHGDGEOJGAK*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DIBNMICOEEN__CTOR_OFFSET))(this);
	}

	::System::Void IPBJKCKBHJB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DIBNMICOEEN_IPBJKCKBHJB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void BFMCEPEEPJC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DIBNMICOEEN_BFMCEPEEPJC_OFFSET))(this, PIIPCLCCOIG);
	}
};
