#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FMHDMLBDIJC;
class IILMGLCLKKF;

#define DONGCBIGJJL_KKAPAKJCKNF_AECNKJBNGMC_OFFSET UNITYSDK_OFFSET(0x1351AB40)
#define DONGCBIGJJL_KKAPAKJCKNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1351AB30)

inline static constexpr unsigned int DONGCBIGJJL_KKAPAKJCKNF_TypeDefinitionIndex = 70498;

class DONGCBIGJJL_KKAPAKJCKNF : public ::System::Object
{
public:
	::IILMGLCLKKF* CIPDJBDNLDB; // 0x10
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_KKAPAKJCKNF__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> AECNKJBNGMC(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DONGCBIGJJL_KKAPAKJCKNF_AECNKJBNGMC_OFFSET))(this, MFHBPIBHAOB);
	}
};
