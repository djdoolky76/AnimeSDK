#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNAMAFIPLGB;

#define FJOKOGDDBIN_ENAHDIGBLMC_IICFHIKKMIE_OFFSET UNITYSDK_OFFSET(0x156C1B00)
#define FJOKOGDDBIN_ENAHDIGBLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x156C1AF0)

inline static constexpr unsigned int FJOKOGDDBIN_ENAHDIGBLMC_TypeDefinitionIndex = 85130;

class FJOKOGDDBIN_ENAHDIGBLMC : public ::System::Object
{
public:
	::System::Int32 MDJFJPHNGCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_ENAHDIGBLMC__CTOR_OFFSET))(this);
	}

	::System::Boolean IICFHIKKMIE(::NNAMAFIPLGB* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNAMAFIPLGB*))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_ENAHDIGBLMC_IICFHIKKMIE_OFFSET))(this, NFFNEFLKPDG);
	}
};
