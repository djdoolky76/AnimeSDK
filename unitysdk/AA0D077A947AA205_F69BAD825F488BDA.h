#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AA0D077A947AA205_F69BAD825F488BDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA0D077A947AA205_F69BAD825F488BDA_TypeDefinitionIndex = 3018;

class AA0D077A947AA205_F69BAD825F488BDA : public ::System::Object
{
public:
	::System::String* E6B288436731019A; // 0x10
	::System::Int32 A7E3A2FD468A438B; // 0x18
	::System::Byte _padding0[0x4];
	::System::UInt64 A42B9A08B09FDC5D; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA0D077A947AA205_F69BAD825F488BDA__CTOR_OFFSET))(this);
	}
};
