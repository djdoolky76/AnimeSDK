#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJLCGNBIDJP;
class LEFFOBDDLPC;

#define JAJHAJEHPON_CBPBPMHANMO_LAOLBIGJMKD_OFFSET UNITYSDK_OFFSET(0x160C6D20)
#define JAJHAJEHPON_CBPBPMHANMO_LMGLIJNJBOM_OFFSET UNITYSDK_OFFSET(0x160C6CF0)
#define JAJHAJEHPON_CBPBPMHANMO__CTOR_OFFSET UNITYSDK_OFFSET(0x160C6CE0)

inline static constexpr unsigned int JAJHAJEHPON_CBPBPMHANMO_TypeDefinitionIndex = 55489;

class JAJHAJEHPON_CBPBPMHANMO : public ::System::Object
{
public:
	::System::Int32 PAEEEHKILOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_CBPBPMHANMO__CTOR_OFFSET))(this);
	}

	::System::Boolean LMGLIJNJBOM(::LEFFOBDDLPC* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LEFFOBDDLPC*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_CBPBPMHANMO_LMGLIJNJBOM_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean LAOLBIGJMKD(::AJLCGNBIDJP* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJLCGNBIDJP*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_CBPBPMHANMO_LAOLBIGJMKD_OFFSET))(this, HMMMOCJAEOA);
	}
};
