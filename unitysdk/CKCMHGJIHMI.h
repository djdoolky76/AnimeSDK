#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class KBDGKAJPALP;

#define CKCMHGJIHMI_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x8CC5F0)
#define CKCMHGJIHMI__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int CKCMHGJIHMI_TypeDefinitionIndex = 93497;

struct alignas(4) CKCMHGJIHMI
{
	::System::Int32 IPLPENGMPBB; // 0x10

	::System::Void _ctor(::System::Int32 IPLPENGMPBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CKCMHGJIHMI__CTOR_OFFSET))(this, IPLPENGMPBB);
	}

	::System::Boolean NFJIDKBNIKP(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + CKCMHGJIHMI_NFJIDKBNIKP_OFFSET))(this, GEEHGDABNJF);
	}
};
