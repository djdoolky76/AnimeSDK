#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JBKHHHPLBEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19448860)

inline static constexpr unsigned int JBKHHHPLBEL_TypeDefinitionIndex = 63175;

class JBKHHHPLBEL : public ::System::Object
{
public:
	::System::Boolean GGDDBCENDFI; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 BBMHCILJACC; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKHHHPLBEL__CTOR_OFFSET))(this);
	}
};
