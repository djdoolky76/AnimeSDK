#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBEPKELNDPC_JEAIFDNPIAH_OFFSET UNITYSDK_OFFSET(0x13CDB7C0)
#define KBEPKELNDPC_OEOHJGGJPAL_OFFSET UNITYSDK_OFFSET(0x13CDB820)
#define KBEPKELNDPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13CDB700)

inline static constexpr unsigned int KBEPKELNDPC_TypeDefinitionIndex = 93214;

class KBEPKELNDPC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* JNMLHNNJOJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEPKELNDPC__CTOR_OFFSET))(this);
	}

	::System::Void JEAIFDNPIAH(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBEPKELNDPC_JEAIFDNPIAH_OFFSET))(this, COMDNFILAIC);
	}

	::System::Boolean OEOHJGGJPAL(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBEPKELNDPC_OEOHJGGJPAL_OFFSET))(this, COMDNFILAIC);
	}
};
