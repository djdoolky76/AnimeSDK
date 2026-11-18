#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IOONMNPCCNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1988DAA0)

inline static constexpr unsigned int IOONMNPCCNF_TypeDefinitionIndex = 86205;

class IOONMNPCCNF : public ::System::Object
{
public:
	::System::Boolean JDAGKAMAGAK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOONMNPCCNF__CTOR_OFFSET))(this);
	}
};
