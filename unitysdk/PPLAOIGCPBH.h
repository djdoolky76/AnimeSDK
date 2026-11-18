#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PPLAOIGCPBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D63A630)

inline static constexpr unsigned int PPLAOIGCPBH_TypeDefinitionIndex = 53977;

class PPLAOIGCPBH : public ::System::Object
{
public:
	::System::String* BPJJFLGNPEI; // 0x10
	::System::Double DBOFLDGEHBD; // 0x18
	::System::Double OKAGDPDHKKG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLAOIGCPBH__CTOR_OFFSET))(this);
	}
};
