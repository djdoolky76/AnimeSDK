#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define ODDCCJFKAFC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16BFBA20)
#define ODDCCJFKAFC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x16BFB990)
#define ODDCCJFKAFC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x16BFB8C0)
#define ODDCCJFKAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFB980)

inline static constexpr unsigned int ODDCCJFKAFC_TypeDefinitionIndex = 88895;

class ODDCCJFKAFC : public ::KCIPADHDIIN
{
public:
	::System::Boolean EGPDEPPBIOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDCCJFKAFC__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDCCJFKAFC_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::ODDCCJFKAFC* BBPCBEEHALC()
	{
		return ((::ODDCCJFKAFC*(*)())((::PBYTE)hIl2Cpp + ODDCCJFKAFC_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDCCJFKAFC_ANEOCOIFDDJ_OFFSET))(this);
	}
};
