#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;

#define EJINDPBKMHH_CPDINBOPLFA_IDPNNBECHPC_OFFSET UNITYSDK_OFFSET(0x14AA09A0)
#define EJINDPBKMHH_CPDINBOPLFA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA0990)

inline static constexpr unsigned int EJINDPBKMHH_CPDINBOPLFA_TypeDefinitionIndex = 46497;

class EJINDPBKMHH_CPDINBOPLFA : public ::System::Object
{
public:
	::System::Boolean CFNJFGLONKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_CPDINBOPLFA__CTOR_OFFSET))(this);
	}

	::System::Void IDPNNBECHPC(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + EJINDPBKMHH_CPDINBOPLFA_IDPNNBECHPC_OFFSET))(this, HMMMOCJAEOA);
	}
};
