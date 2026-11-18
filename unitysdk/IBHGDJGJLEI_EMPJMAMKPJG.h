#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NBAPHAFDIBF;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_EMPJMAMKPJG_FONCIMLJELL_OFFSET UNITYSDK_OFFSET(0x12E9E930)
#define IBHGDJGJLEI_EMPJMAMKPJG_NCKFHBFCKOO_OFFSET UNITYSDK_OFFSET(0x12E9E920)
#define IBHGDJGJLEI_EMPJMAMKPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E910)

inline static constexpr unsigned int IBHGDJGJLEI_EMPJMAMKPJG_TypeDefinitionIndex = 55761;

class IBHGDJGJLEI_EMPJMAMKPJG : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::NBAPHAFDIBF*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_EMPJMAMKPJG__CTOR_OFFSET))(this);
	}

	::System::Void NCKFHBFCKOO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_EMPJMAMKPJG_NCKFHBFCKOO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FONCIMLJELL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_EMPJMAMKPJG_FONCIMLJELL_OFFSET))(this, GLAOEHCGCFO);
	}
};
