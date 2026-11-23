#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A6C7814901D9A2DE;

#define E65C37BD1C015E4B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E65C37BD1C015E4B_TypeDefinitionIndex = 165;

class E65C37BD1C015E4B : public ::E379DE61A548837D
{
public:
	::System::UInt32 EDB42C4C835AAD90; // 0x38
	::System::UInt32 B98764913FF8298E; // 0x3C
	::System::UInt32 B240C78BB6BC8182; // 0x40
	::System::Byte _padding0[0x4];
	::A6C7814901D9A2DE* FCE2C9F60E26B8C3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E65C37BD1C015E4B__CTOR_OFFSET))(this);
	}
};
