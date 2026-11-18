#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EAEOPOJCHOA_DEIFBAJHBNM_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x76BF20)
#define EAEOPOJCHOA_DEIFBAJHBNM_LKOLCCLGHHI_OFFSET UNITYSDK_OFFSET(0x366EF0)

inline static constexpr unsigned int EAEOPOJCHOA_DEIFBAJHBNM_TypeDefinitionIndex = 93197;

struct alignas(4) EAEOPOJCHOA_DEIFBAJHBNM
{
	::System::Int32 MGMDLMBEDJF; // 0x10
	::System::Int32 NOGGAPFJGJI; // 0x14
	::System::Int32 DOBFFIICAII; // 0x18
	::System::Single JLGBFMDKFHE; // 0x1C

	::System::Int32 LKOLCCLGHHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEOPOJCHOA_DEIFBAJHBNM_LKOLCCLGHHI_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAEOPOJCHOA_DEIFBAJHBNM_JDAPDDEOCEA_OFFSET))(this);
	}
};
