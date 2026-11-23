#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

#define B543267D3262BB1F_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28CA850)
#define B543267D3262BB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x289FA50)

inline static constexpr unsigned int B543267D3262BB1F_TypeDefinitionIndex = 16345;

class B543267D3262BB1F : public ::ABEBA93AD61764EF
{
public:
	::System::Single B7443CF123C267BB; // 0x18

	::System::Boolean FC3208D7B8C7EE04(::B543267D3262BB1F* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B543267D3262BB1F*))((::PBYTE)hIl2Cpp + B543267D3262BB1F_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B543267D3262BB1F__CTOR_OFFSET))(this);
	}
};
