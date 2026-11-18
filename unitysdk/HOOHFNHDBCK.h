#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOOHFNHDBCK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F51C90)

inline static constexpr unsigned int HOOHFNHDBCK_TypeDefinitionIndex = 90489;

class HOOHFNHDBCK : public ::System::Object
{
public:
	::System::Int32 KMOBELIJKGF; // 0x10
	::System::Int32 HBADNCJHEOJ; // 0x14
	::System::Boolean IDDHLNJELBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOHFNHDBCK__CTOR_OFFSET))(this);
	}
};
