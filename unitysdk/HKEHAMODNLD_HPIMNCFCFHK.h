#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNPFJKPGEHF;

#define HKEHAMODNLD_HPIMNCFCFHK_BENCKNJHPCE_OFFSET UNITYSDK_OFFSET(0x14705440)
#define HKEHAMODNLD_HPIMNCFCFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x14705430)

inline static constexpr unsigned int HKEHAMODNLD_HPIMNCFCFHK_TypeDefinitionIndex = 51868;

class HKEHAMODNLD_HPIMNCFCFHK : public ::System::Object
{
public:
	::System::Int32 OPNJBIKDJBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEHAMODNLD_HPIMNCFCFHK__CTOR_OFFSET))(this);
	}

	::System::Void BENCKNJHPCE(::PNPFJKPGEHF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + HKEHAMODNLD_HPIMNCFCFHK_BENCKNJHPCE_OFFSET))(this, GLAOEHCGCFO);
	}
};
