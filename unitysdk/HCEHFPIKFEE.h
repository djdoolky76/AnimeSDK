#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;

#define HCEHFPIKFEE_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x17AEAA20)
#define HCEHFPIKFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEAC20)

inline static constexpr unsigned int HCEHFPIKFEE_TypeDefinitionIndex = 57703;

class HCEHFPIKFEE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEHFPIKFEE__CTOR_OFFSET))(this);
	}

	::System::Int32 NIIHMPMKICM(::OAOFCEFPEHP* FFKBEGIHIGG, ::OAOFCEFPEHP* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::OAOFCEFPEHP*, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + HCEHFPIKFEE_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
