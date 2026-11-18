#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBBOLEDJDCD;

#define DLLHEPBDJKN_COMPARE_OFFSET UNITYSDK_OFFSET(0x149BBC10)
#define DLLHEPBDJKN__CTOR_OFFSET UNITYSDK_OFFSET(0x149BBCE0)

inline static constexpr unsigned int DLLHEPBDJKN_TypeDefinitionIndex = 47948;

class DLLHEPBDJKN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLHEPBDJKN__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::IBBOLEDJDCD* FFKBEGIHIGG, ::IBBOLEDJDCD* CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::IBBOLEDJDCD*, ::IBBOLEDJDCD*))((::PBYTE)hIl2Cpp + DLLHEPBDJKN_COMPARE_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}
};
