#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LAOAKNOBGIJ;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define IBHGDJGJLEI_KGGPPKJPPJI_AFMLDMJEPEN_OFFSET UNITYSDK_OFFSET(0x15BF38D0)
#define IBHGDJGJLEI_KGGPPKJPPJI_GKJDBEBIAMD_OFFSET UNITYSDK_OFFSET(0x15BF3950)
#define IBHGDJGJLEI_KGGPPKJPPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF38C0)

inline static constexpr unsigned int IBHGDJGJLEI_KGGPPKJPPJI_TypeDefinitionIndex = 55790;

class IBHGDJGJLEI_KGGPPKJPPJI : public ::System::Object
{
public:
	::System::Action_1<::DFDEIDBBGHG_1<::LAOAKNOBGIJ*>*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KGGPPKJPPJI__CTOR_OFFSET))(this);
	}

	::System::Void AFMLDMJEPEN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KGGPPKJPPJI_AFMLDMJEPEN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void GKJDBEBIAMD(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_KGGPPKJPPJI_GKJDBEBIAMD_OFFSET))(this, BLLNHDIDKPA);
	}
};
