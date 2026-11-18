#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJNFLFFJNMD.h"

class OMDAPGKMILG;

#define OFHPHNAKKGG_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0xF180B30)
#define OFHPHNAKKGG__CTOR_OFFSET UNITYSDK_OFFSET(0xF180BC0)

inline static constexpr unsigned int OFHPHNAKKGG_TypeDefinitionIndex = 54689;

class OFHPHNAKKGG : public ::JJNFLFFJNMD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHPHNAKKGG__CTOR_OFFSET))(this);
	}

	::System::Boolean FOCDKCOPFAG(::OMDAPGKMILG* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMDAPGKMILG*))((::PBYTE)hIl2Cpp + OFHPHNAKKGG_FOCDKCOPFAG_OFFSET))(this, LJBPECKCCEA);
	}
};
