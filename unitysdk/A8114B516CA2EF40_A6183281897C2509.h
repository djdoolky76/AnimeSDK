#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A8114B516CA2EF40_BB8A90CC2DE25337;
class F8CC45D53444C1FA;
namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define A8114B516CA2EF40_A6183281897C2509_A52BC84AF8BD2AC2_OFFSET UNITYSDK_OFFSET(0x38BF110)
#define A8114B516CA2EF40_A6183281897C2509__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8114B516CA2EF40_A6183281897C2509_TypeDefinitionIndex = 20297;

class A8114B516CA2EF40_A6183281897C2509 : public ::System::Object
{
public:
	::System::Reflection::MethodInfo* B5A4CBA64799CE07; // 0x10
	::A8114B516CA2EF40_BB8A90CC2DE25337* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8114B516CA2EF40_A6183281897C2509__CTOR_OFFSET))(this);
	}

	::System::Delegate* A52BC84AF8BD2AC2(::F8CC45D53444C1FA* E1B624472530B0E4)
	{
		return ((::System::Delegate*(*)(::PVOID, ::F8CC45D53444C1FA*))((::PBYTE)hIl2Cpp + A8114B516CA2EF40_A6183281897C2509_A52BC84AF8BD2AC2_OFFSET))(this, E1B624472530B0E4);
	}
};
