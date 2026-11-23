#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

#define E9498B0DCEDD1037_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2898A70)
#define E9498B0DCEDD1037__CTOR_OFFSET UNITYSDK_OFFSET(0x2898B70)

inline static constexpr unsigned int E9498B0DCEDD1037_TypeDefinitionIndex = 16168;

class E9498B0DCEDD1037 : public ::ABEBA93AD61764EF
{
public:
	::System::Single E2FD797A45D978E4; // 0x18
	::System::Single E306EEDB69F013A5; // 0x1C
	::System::Single F50E613BAEA8B1FE; // 0x20
	::System::Single BD88E7EF3F09201C; // 0x24
	::System::Single B6E572C880672D29; // 0x28

	::System::Boolean FC3208D7B8C7EE04(::E9498B0DCEDD1037* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E9498B0DCEDD1037*))((::PBYTE)hIl2Cpp + E9498B0DCEDD1037_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9498B0DCEDD1037__CTOR_OFFSET))(this);
	}
};
