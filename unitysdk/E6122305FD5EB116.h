#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E6122305FD5EB116__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6122305FD5EB116_TypeDefinitionIndex = 9699;

class E6122305FD5EB116 : public ::E379DE61A548837D
{
public:
	::System::Int32 E8A1A1345CE071C9; // 0x38
	::System::Byte _padding0[0x4];
	::System::UInt64 F9B86CEEECEAA2EB; // 0x40
	::System::UInt64 F1795B35773A25E1; // 0x48
	::System::UInt32 E43E467F516F27D3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6122305FD5EB116__CTOR_OFFSET))(this);
	}
};
