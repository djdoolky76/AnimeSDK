#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseState.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;

#define B8E5F43ABD95CE34_AEFAF2D3F9FDB6C5_OFFSET UNITYSDK_OFFSET(0x18E4420)
#define B8E5F43ABD95CE34_B58E04B1039499D8_OFFSET UNITYSDK_OFFSET(0x1983150)
#define B8E5F43ABD95CE34__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8E5F43ABD95CE34_TypeDefinitionIndex = 7084;

class B8E5F43ABD95CE34 : public ::System::Object
{
public:
	::A04FB906869DCF3A* BEB14AC1174A802A; // 0x10
	::ABC::Config::WwiseState F79467DE52D04AF4; // 0x18
	::System::Int32 FC26520E2D611F2D; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8E5F43ABD95CE34__CTOR_OFFSET))(this);
	}

	::System::Void B58E04B1039499D8(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B8E5F43ABD95CE34_B58E04B1039499D8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Int32 AEFAF2D3F9FDB6C5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B8E5F43ABD95CE34_AEFAF2D3F9FDB6C5_OFFSET))(this);
	}
};
