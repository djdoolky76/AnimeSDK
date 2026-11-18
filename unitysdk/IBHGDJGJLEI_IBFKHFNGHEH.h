#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHFEGIFFLKO;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_IBFKHFNGHEH_EMJAHFBEFCP_OFFSET UNITYSDK_OFFSET(0xF835A40)
#define IBHGDJGJLEI_IBFKHFNGHEH_MLFHJAKNIGL_OFFSET UNITYSDK_OFFSET(0xF835A50)
#define IBHGDJGJLEI_IBFKHFNGHEH__CTOR_OFFSET UNITYSDK_OFFSET(0xF835A30)

inline static constexpr unsigned int IBHGDJGJLEI_IBFKHFNGHEH_TypeDefinitionIndex = 55755;

class IBHGDJGJLEI_IBFKHFNGHEH : public ::System::Object
{
public:
	::System::Action_1<::MHFEGIFFLKO*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IBFKHFNGHEH__CTOR_OFFSET))(this);
	}

	::System::Void EMJAHFBEFCP(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IBFKHFNGHEH_EMJAHFBEFCP_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void MLFHJAKNIGL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IBFKHFNGHEH_MLFHJAKNIGL_OFFSET))(this, GLAOEHCGCFO);
	}
};
