#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define A7EEF4364636246C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A7EEF4364636246C_TypeDefinitionIndex = 562;

class A7EEF4364636246C : public ::E379DE61A548837D
{
public:
	::System::UInt32 FA6AC2D41E18AFA5; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* F612230AADCB175E; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7EEF4364636246C__CTOR_OFFSET))(this);
	}
};
