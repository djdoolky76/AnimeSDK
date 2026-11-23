#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAE9FCDBE2DA73A5;

#define E9F992A59B502E6F_EA0665C28468ED9B_OFFSET UNITYSDK_OFFSET(0x1C30750)
#define E9F992A59B502E6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9F992A59B502E6F_TypeDefinitionIndex = 9288;

class E9F992A59B502E6F : public ::System::Object
{
public:
	::EAE9FCDBE2DA73A5* E503CF3EAE138E9D; // 0x10

	::System::Void EA0665C28468ED9B(::EAE9FCDBE2DA73A5* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::PVOID, ::EAE9FCDBE2DA73A5*))((::PBYTE)hIl2Cpp + E9F992A59B502E6F_EA0665C28468ED9B_OFFSET))(this, ACDE58E97E37D13C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9F992A59B502E6F__CTOR_OFFSET))(this);
	}
};
