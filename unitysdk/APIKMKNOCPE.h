#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APIKMKNOCPE__CTOR_OFFSET UNITYSDK_OFFSET(0x113CA280)

inline static constexpr unsigned int APIKMKNOCPE_TypeDefinitionIndex = 61454;

class APIKMKNOCPE : public ::System::Object
{
public:
	// static const ::System::Int32 LGDOEAPDLOH = 0xF423F; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIKMKNOCPE__CTOR_OFFSET))(this);
	}
};
