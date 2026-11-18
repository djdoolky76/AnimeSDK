#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GJGEMNDGPKC;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_IGOGAELMHFA_BEBNODMIHMN_OFFSET UNITYSDK_OFFSET(0xEBA9CE0)
#define IBHGDJGJLEI_IGOGAELMHFA_KGDCEEEFMMF_OFFSET UNITYSDK_OFFSET(0xEBA9CF0)
#define IBHGDJGJLEI_IGOGAELMHFA__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA9CD0)

inline static constexpr unsigned int IBHGDJGJLEI_IGOGAELMHFA_TypeDefinitionIndex = 55753;

class IBHGDJGJLEI_IGOGAELMHFA : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action_1<::GJGEMNDGPKC*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IGOGAELMHFA__CTOR_OFFSET))(this);
	}

	::System::Void BEBNODMIHMN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IGOGAELMHFA_BEBNODMIHMN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KGDCEEEFMMF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IGOGAELMHFA_KGDCEEEFMMF_OFFSET))(this, GLAOEHCGCFO);
	}
};
