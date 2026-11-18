#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKDJDMMCIAH_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x10E09560)
#define BKDJDMMCIAH__CTOR_OFFSET UNITYSDK_OFFSET(0x10E09550)

inline static constexpr unsigned int BKDJDMMCIAH_TypeDefinitionIndex = 86014;

class BKDJDMMCIAH : public ::System::Object
{
public:
	::System::Int32 EMJOPKEAMFK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDJDMMCIAH__CTOR_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDJDMMCIAH_EMCPPBMEKKK_OFFSET))(this);
	}
};
