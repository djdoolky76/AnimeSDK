#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKNAKAOIGHJ;

#define NHJBOMLNMIH_MEAJEMGDKKJ_LDOGCMBCJDH_OFFSET UNITYSDK_OFFSET(0xE75C540)
#define NHJBOMLNMIH_MEAJEMGDKKJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE75C530)

inline static constexpr unsigned int NHJBOMLNMIH_MEAJEMGDKKJ_TypeDefinitionIndex = 88201;

class NHJBOMLNMIH_MEAJEMGDKKJ : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_MEAJEMGDKKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LDOGCMBCJDH(::IKNAKAOIGHJ* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::IKNAKAOIGHJ*))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_MEAJEMGDKKJ_LDOGCMBCJDH_OFFSET))(this, LJBPECKCCEA);
	}
};
