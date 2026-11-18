#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGALFHMPJLF;

#define LGKCEEFIALL_BHDEFPDBODO_KFKEPNHPPAN_OFFSET UNITYSDK_OFFSET(0x14DAB410)
#define LGKCEEFIALL_BHDEFPDBODO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAAF70)

inline static constexpr unsigned int LGKCEEFIALL_BHDEFPDBODO_TypeDefinitionIndex = 88203;

class LGKCEEFIALL_BHDEFPDBODO : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKCEEFIALL_BHDEFPDBODO__CTOR_OFFSET))(this);
	}

	::System::Boolean KFKEPNHPPAN(::AGALFHMPJLF* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AGALFHMPJLF*))((::PBYTE)hIl2Cpp + LGKCEEFIALL_BHDEFPDBODO_KFKEPNHPPAN_OFFSET))(this, PELAJIFDIPN);
	}
};
