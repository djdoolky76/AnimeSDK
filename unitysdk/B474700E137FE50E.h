#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A6EF590088EA17E7;

#define B474700E137FE50E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B474700E137FE50E_TypeDefinitionIndex = 644;

class B474700E137FE50E : public ::E379DE61A548837D
{
public:
	::System::Int32 E584E2C8287562DB; // 0x38
	::System::Byte _padding0[0x4];
	::A6EF590088EA17E7* B2EEFD4EF6922D38; // 0x40
	::System::Int32 F0B8B8D7A4952E51; // 0x48
	::System::Boolean F9438ECC5C56AB9E; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B474700E137FE50E__CTOR_OFFSET))(this);
	}
};
