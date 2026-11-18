#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/System/ValueType.h"

#define JHALOEPPLMD_LACKMNHJMLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B4050)
#define JHALOEPPLMD_LACKMNHJMLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7B40B0)

inline static constexpr unsigned int JHALOEPPLMD_LACKMNHJMLK_TypeDefinitionIndex = 39694;

struct alignas(4) JHALOEPPLMD_LACKMNHJMLK
{
	::System::Boolean Equals(::MoleMole::Config::InputType EJCBEJMGFAJ, ::MoleMole::Config::InputType EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InputType, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + JHALOEPPLMD_LACKMNHJMLK_EQUALS_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::InputType EJCBEJMGFAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + JHALOEPPLMD_LACKMNHJMLK_GETHASHCODE_OFFSET))(this, EJCBEJMGFAJ);
	}
};
