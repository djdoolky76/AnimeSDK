#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNODFCGNCLN__CTOR_OFFSET UNITYSDK_OFFSET(0x11D8B200)

inline static constexpr unsigned int FNODFCGNCLN_TypeDefinitionIndex = 89175;

class FNODFCGNCLN : public ::System::Object
{
public:
	::System::Boolean HPIAIKAJADI; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single JMLCPADPPNM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNODFCGNCLN__CTOR_OFFSET))(this);
	}
};
