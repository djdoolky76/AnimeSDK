#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBPFKHFACN.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define IBHGDJGJLEI_AEIMLOGNCHI_EICPOCMCDFG_OFFSET UNITYSDK_OFFSET(0x10130300)
#define IBHGDJGJLEI_AEIMLOGNCHI_NJHMJMKOIFE_OFFSET UNITYSDK_OFFSET(0x10130260)
#define IBHGDJGJLEI_AEIMLOGNCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x10130250)

inline static constexpr unsigned int IBHGDJGJLEI_AEIMLOGNCHI_TypeDefinitionIndex = 55767;

class IBHGDJGJLEI_AEIMLOGNCHI : public ::System::Object
{
public:
	::System::Action_3<::System::UInt32, ::System::Int32, ::AJBPFKHFACN>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_AEIMLOGNCHI__CTOR_OFFSET))(this);
	}

	::System::Void NJHMJMKOIFE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_AEIMLOGNCHI_NJHMJMKOIFE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EICPOCMCDFG(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_AEIMLOGNCHI_EICPOCMCDFG_OFFSET))(this, BLLNHDIDKPA);
	}
};
