#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EDCPAJNLHJF__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B9F60)

inline static constexpr unsigned int EDCPAJNLHJF_TypeDefinitionIndex = 63363;

class EDCPAJNLHJF : public ::System::Object
{
public:
	::System::UInt32 HBBGECLNJBB; // 0x10
	::System::Boolean HBAEEHIELLM; // 0x14
	::System::Boolean OCOJFKMOKMK; // 0x15

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCPAJNLHJF__CTOR_OFFSET))(this);
	}
};
