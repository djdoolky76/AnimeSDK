#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAMNHMDMFHE.h"
#include "unitysdk/System/ValueType.h"

#define IFDBBKFIBOA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x5B56F0)
#define IFDBBKFIBOA_KMLKLIBFAMI_OFFSET UNITYSDK_OFFSET(0x5B5750)
#define IFDBBKFIBOA_NCHJEIJCAEG_OFFSET UNITYSDK_OFFSET(0x282350)
#define IFDBBKFIBOA__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int IFDBBKFIBOA_TypeDefinitionIndex = 58999;

struct alignas(8) IFDBBKFIBOA
{
	::Il2CppArray<::NAMNHMDMFHE>* _CAIEKKAJLLN_k__BackingField; // 0x10

	::System::Void _ctor(::Il2CppArray<::NAMNHMDMFHE>* EPHKCIIKINP)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NAMNHMDMFHE>*))((::PBYTE)hIl2Cpp + IFDBBKFIBOA__CTOR_OFFSET))(this, EPHKCIIKINP);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDBBKFIBOA_JDAPDDEOCEA_OFFSET))(this);
	}

	::Il2CppArray<::NAMNHMDMFHE>* NCHJEIJCAEG()
	{
		return ((::Il2CppArray<::NAMNHMDMFHE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDBBKFIBOA_NCHJEIJCAEG_OFFSET))(this);
	}

	::NAMNHMDMFHE KMLKLIBFAMI()
	{
		return ((::NAMNHMDMFHE(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDBBKFIBOA_KMLKLIBFAMI_OFFSET))(this);
	}
};
