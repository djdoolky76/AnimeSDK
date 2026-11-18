#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNAGMHIBOFA_PLGCOGDOFJE;
namespace System { class String; }

#define DNAGMHIBOFA_GEGAFAJIBMC_JFJBKAPCKIH_OFFSET UNITYSDK_OFFSET(0x7FD3740)
#define DNAGMHIBOFA_GEGAFAJIBMC__CTOR_OFFSET UNITYSDK_OFFSET(0x7FD3730)

inline static constexpr unsigned int DNAGMHIBOFA_GEGAFAJIBMC_TypeDefinitionIndex = 56365;

class DNAGMHIBOFA_GEGAFAJIBMC : public ::System::Object
{
public:
	::DNAGMHIBOFA_PLGCOGDOFJE* FGBNBFHOKAA; // 0x10
	::System::String* HIAIKHDFCLN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_GEGAFAJIBMC__CTOR_OFFSET))(this);
	}

	::System::Void JFJBKAPCKIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_GEGAFAJIBMC_JFJBKAPCKIH_OFFSET))(this);
	}
};
