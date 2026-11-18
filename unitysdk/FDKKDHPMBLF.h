#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDKKDHPMBLF__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38DB0)

inline static constexpr unsigned int FDKKDHPMBLF_TypeDefinitionIndex = 70416;

class FDKKDHPMBLF : public ::System::Object
{
public:
	// static const ::System::Int32 MEHPJJFFOMA = 0x1; // 0x0
	// static const ::System::Int32 ELMELMMBNFP = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKKDHPMBLF__CTOR_OFFSET))(this);
	}
};
