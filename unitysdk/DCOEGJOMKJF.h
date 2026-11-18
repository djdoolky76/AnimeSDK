#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DCOEGJOMKJF__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8C80)

inline static constexpr unsigned int DCOEGJOMKJF_TypeDefinitionIndex = 77322;

class DCOEGJOMKJF : public ::System::Object
{
public:
	::System::UInt32 PKBKPPKDALF; // 0x10
	::System::Int32 DDCJENEPKNK; // 0x14
	::System::UInt64 ACHBBPJIBIE; // 0x18

	::System::Void _ctor(::System::UInt64 ACHBBPJIBIE, ::System::Int32 DDCJENEPKNK, ::System::UInt32 PKBKPPKDALF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + DCOEGJOMKJF__CTOR_OFFSET))(this, ACHBBPJIBIE, DDCJENEPKNK, PKBKPPKDALF);
	}
};
