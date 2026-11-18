#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNONKDKJNIJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_EGINCFOKILB_DAIALAEBNKB_OFFSET UNITYSDK_OFFSET(0x15BF3750)
#define IBHGDJGJLEI_EGINCFOKILB_GFOLOGFNKHO_OFFSET UNITYSDK_OFFSET(0x15BF3840)
#define IBHGDJGJLEI_EGINCFOKILB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3740)

inline static constexpr unsigned int IBHGDJGJLEI_EGINCFOKILB_TypeDefinitionIndex = 55764;

class IBHGDJGJLEI_EGINCFOKILB : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::KNONKDKJNIJ*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_EGINCFOKILB__CTOR_OFFSET))(this);
	}

	::System::Void DAIALAEBNKB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_EGINCFOKILB_DAIALAEBNKB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GFOLOGFNKHO(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_EGINCFOKILB_GFOLOGFNKHO_OFFSET))(this, GLAOEHCGCFO);
	}
};
