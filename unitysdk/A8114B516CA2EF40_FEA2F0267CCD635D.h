#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A8114B516CA2EF40_BB8A90CC2DE25337;
class F8CC45D53444C1FA;
namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define A8114B516CA2EF40_FEA2F0267CCD635D_E6167E3CC9F828AF_OFFSET UNITYSDK_OFFSET(0x38BF110)
#define A8114B516CA2EF40_FEA2F0267CCD635D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8114B516CA2EF40_FEA2F0267CCD635D_TypeDefinitionIndex = 20298;

class A8114B516CA2EF40_FEA2F0267CCD635D : public ::System::Object
{
public:
	::System::Reflection::MethodInfo* B5A4CBA64799CE07; // 0x10
	::A8114B516CA2EF40_BB8A90CC2DE25337* EE7A1F7E14032494; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8114B516CA2EF40_FEA2F0267CCD635D__CTOR_OFFSET))(this);
	}

	::System::Delegate* E6167E3CC9F828AF(::F8CC45D53444C1FA* E1B624472530B0E4)
	{
		return ((::System::Delegate*(*)(::PVOID, ::F8CC45D53444C1FA*))((::PBYTE)hIl2Cpp + A8114B516CA2EF40_FEA2F0267CCD635D_E6167E3CC9F828AF_OFFSET))(this, E1B624472530B0E4);
	}
};
