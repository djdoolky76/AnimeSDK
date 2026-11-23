#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class B95645FDAAE0500D;

#define A666BEBB8AA33EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x238F480)

inline static constexpr unsigned int A666BEBB8AA33EC4_TypeDefinitionIndex = 3435;

class A666BEBB8AA33EC4 : public ::E379DE61A548837D
{
public:
	::System::Int32 E067F1580126C949; // 0x38
	::System::Byte _padding0[0x4];
	::B95645FDAAE0500D* B8B550DC95C180F1; // 0x40

	::System::Void _ctor(::B95645FDAAE0500D* BAD3D365D2E40BC6)
	{
		return ((::System::Void(*)(::PVOID, ::B95645FDAAE0500D*))((::PBYTE)hIl2Cpp + A666BEBB8AA33EC4__CTOR_OFFSET))(this, BAD3D365D2E40BC6);
	}
};
