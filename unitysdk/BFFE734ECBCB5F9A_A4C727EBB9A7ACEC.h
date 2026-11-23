#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
class FADE1581E70C25E3;

#define BFFE734ECBCB5F9A_A4C727EBB9A7ACEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFFE734ECBCB5F9A_A4C727EBB9A7ACEC_TypeDefinitionIndex = 2315;

class BFFE734ECBCB5F9A_A4C727EBB9A7ACEC : public ::System::Object
{
public:
	::System::Boolean FBD08428AD1DE417; // 0x10
	::System::Byte _padding0[0x7];
	::E2DE926113CB084F E35202EF49504739; // 0x18
	::AB642D1382756991* B4BE1880E0BA5DB3; // 0x20
	::FADE1581E70C25E3* AE42F479D8A74667; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFE734ECBCB5F9A_A4C727EBB9A7ACEC__CTOR_OFFSET))(this);
	}
};
