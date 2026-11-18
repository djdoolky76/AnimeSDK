#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIALCOHCAMJ.h"

#define IEEPAHOCENL_BAHOEDOEAEF_OFFSET UNITYSDK_OFFSET(0x153A29C0)
#define IEEPAHOCENL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x153A2A80)
#define IEEPAHOCENL_IHCNOMJLLJO_OFFSET UNITYSDK_OFFSET(0x153A2B00)
#define IEEPAHOCENL_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x153A2960)
#define IEEPAHOCENL_PBNLEOFFOHA_OFFSET UNITYSDK_OFFSET(0x153A2AC0)
#define IEEPAHOCENL_PCNNMBGBONF_OFFSET UNITYSDK_OFFSET(0x153A2A20)
#define IEEPAHOCENL__CTOR_OFFSET UNITYSDK_OFFSET(0x153A2B40)

inline static constexpr unsigned int IEEPAHOCENL_TypeDefinitionIndex = 70576;

class IEEPAHOCENL : public ::HIALCOHCAMJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL__CTOR_OFFSET))(this);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void BAHOEDOEAEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL_BAHOEDOEAEF_OFFSET))(this);
	}

	::System::Void PCNNMBGBONF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL_PCNNMBGBONF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void PBNLEOFFOHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL_PBNLEOFFOHA_OFFSET))(this);
	}

	::System::Void IHCNOMJLLJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEEPAHOCENL_IHCNOMJLLJO_OFFSET))(this);
	}
};
