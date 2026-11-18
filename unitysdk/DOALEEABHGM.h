#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOALEEABHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1545DA90)

inline static constexpr unsigned int DOALEEABHGM_TypeDefinitionIndex = 72811;

class DOALEEABHGM : public ::System::Object
{
public:
	::System::Boolean OFCPPMNPMPC; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 BIOGEIHKABE; // 0x14

	::System::Void _ctor(::System::Boolean OFCPPMNPMPC, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + DOALEEABHGM__CTOR_OFFSET))(this, OFCPPMNPMPC, BIOGEIHKABE);
	}
};
