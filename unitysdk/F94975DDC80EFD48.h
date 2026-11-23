#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B4DC0F630E08B9B8/F4F67D2AE29132B8.h"
#include "unitysdk/FB0D64B103BB2404.h"

#define F94975DDC80EFD48__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F94975DDC80EFD48_TypeDefinitionIndex = 7918;

class F94975DDC80EFD48 : public ::FB0D64B103BB2404
{
public:
	::System::Int32 A629BDCC8CE2B619; // 0x10
	::B4DC0F630E08B9B8::F4F67D2AE29132B8 B4AF3D8EACCC4739; // 0x14
	::System::Boolean A5311DA53273A1B9; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 FA42701A09F95AFC; // 0x1C
	::System::Single E075350DA8ACED54; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F94975DDC80EFD48__CTOR_OFFSET))(this);
	}
};
