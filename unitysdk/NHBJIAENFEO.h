#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;

#define NHBJIAENFEO_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x13757930)
#define NHBJIAENFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x13757920)

inline static constexpr unsigned int NHBJIAENFEO_TypeDefinitionIndex = 73666;

class NHBJIAENFEO : public ::System::Object
{
public:
	::FBHPDPBIGPK* NACNMDMAAEH; // 0x10

	::System::Void _ctor(::FBHPDPBIGPK* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + NHBJIAENFEO__CTOR_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBJIAENFEO_FCMNHLDLJCI_OFFSET))(this);
	}
};
