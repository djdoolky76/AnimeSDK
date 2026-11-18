#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CMNIPINNPMA_CGNPIGHBMDN_OFFSET UNITYSDK_OFFSET(0x1EDEF240)
#define CMNIPINNPMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDEF3E0)
#define CMNIPINNPMA_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x1EDEF480)
#define CMNIPINNPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDEF470)

inline static constexpr unsigned int CMNIPINNPMA_TypeDefinitionIndex = 18732;

class CMNIPINNPMA : public ::System::Object
{
public:
	::System::Single KNOJCBBKIGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNIPINNPMA__CTOR_OFFSET))(this);
	}

	::System::Single CGNPIGHBMDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNIPINNPMA_CGNPIGHBMDN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNIPINNPMA_DISPOSE_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::System::Single OICIDHAGAKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMNIPINNPMA_DKCCELBNBLM_OFFSET))(this, OICIDHAGAKN);
	}
};
