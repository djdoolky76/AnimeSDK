#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;

#define EKGAHGCJOAN_PPMOAIAODLJ_BNHMNHIMPKJ_OFFSET UNITYSDK_OFFSET(0xFE1C5B0)
#define EKGAHGCJOAN_PPMOAIAODLJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1C5A0)

inline static constexpr unsigned int EKGAHGCJOAN_PPMOAIAODLJ_TypeDefinitionIndex = 51222;

class EKGAHGCJOAN_PPMOAIAODLJ : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Int32 MOHCFNIGGOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PPMOAIAODLJ__CTOR_OFFSET))(this);
	}

	::System::Void BNHMNHIMPKJ(::System::Int32 KCNOHOOPNAH, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_PPMOAIAODLJ_BNHMNHIMPKJ_OFFSET))(this, KCNOHOOPNAH, BIOGEIHKABE);
	}
};
