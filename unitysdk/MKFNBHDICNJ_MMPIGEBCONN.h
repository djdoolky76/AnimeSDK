#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELFFONPBBD;

#define MKFNBHDICNJ_MMPIGEBCONN_OLDHPFLGNKK_OFFSET UNITYSDK_OFFSET(0x11A11450)
#define MKFNBHDICNJ_MMPIGEBCONN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A11440)

inline static constexpr unsigned int MKFNBHDICNJ_MMPIGEBCONN_TypeDefinitionIndex = 61391;

class MKFNBHDICNJ_MMPIGEBCONN : public ::System::Object
{
public:
	::System::UInt32 PJJANNMMJCC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MMPIGEBCONN__CTOR_OFFSET))(this);
	}

	::System::Boolean OLDHPFLGNKK(::MELFFONPBBD* ONOAGAPJNCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELFFONPBBD*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MMPIGEBCONN_OLDHPFLGNKK_OFFSET))(this, ONOAGAPJNCG);
	}
};
