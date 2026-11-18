#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKDNOBNFADI;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define IBHGDJGJLEI_HGLPFBNIMHC_GEKLAEEMDMK_OFFSET UNITYSDK_OFFSET(0x12E9E9C0)
#define IBHGDJGJLEI_HGLPFBNIMHC_HDIIGEJKOMF_OFFSET UNITYSDK_OFFSET(0x12E9E9D0)
#define IBHGDJGJLEI_HGLPFBNIMHC__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E9B0)

inline static constexpr unsigned int IBHGDJGJLEI_HGLPFBNIMHC_TypeDefinitionIndex = 55787;

class IBHGDJGJLEI_HGLPFBNIMHC : public ::System::Object
{
public:
	::System::Action_1<::DFDEIDBBGHG_1<::CKDNOBNFADI*>*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HGLPFBNIMHC__CTOR_OFFSET))(this);
	}

	::System::Void GEKLAEEMDMK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HGLPFBNIMHC_GEKLAEEMDMK_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HDIIGEJKOMF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HGLPFBNIMHC_HDIIGEJKOMF_OFFSET))(this, GLAOEHCGCFO);
	}
};
