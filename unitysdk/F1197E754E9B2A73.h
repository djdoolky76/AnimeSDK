#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B26A7B27E2A0343D.h"
#include "unitysdk/System/Object.h"

class E0319686A8F3BC55;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F1197E754E9B2A73_A0ABBC0B67B0B2E8_OFFSET UNITYSDK_OFFSET(0x1720120)
#define F1197E754E9B2A73__CTOR_OFFSET UNITYSDK_OFFSET(0x17203D0)

inline static constexpr unsigned int F1197E754E9B2A73_TypeDefinitionIndex = 681;

class F1197E754E9B2A73 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::E0319686A8F3BC55*>* A724B3D64BFB843E; // 0x10
	::System::Int32 FD59975CC0928501; // 0x18
	::System::Int32 F95F6AB17083793C; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1197E754E9B2A73__CTOR_OFFSET))(this);
	}

	::System::Int32 A0ABBC0B67B0B2E8(::E68AA4EB51923C98::B26A7B27E2A0343D EC892A4AA9C2692B)
	{
		return ((::System::Int32(*)(::PVOID, ::E68AA4EB51923C98::B26A7B27E2A0343D))((::PBYTE)hIl2Cpp + F1197E754E9B2A73_A0ABBC0B67B0B2E8_OFFSET))(this, EC892A4AA9C2692B);
	}
};
