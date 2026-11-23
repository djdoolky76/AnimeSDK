#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System { class String; }

#define F1A311F7DE3DEBDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1A311F7DE3DEBDE_TypeDefinitionIndex = 1666;

class F1A311F7DE3DEBDE : public ::System::Object
{
public:
	::System::UInt32 A5E9A61B8A23886C; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* BC9C5D0F1F1D3BF7; // 0x18
	::AB893667BB6F371B A19F6DDD0D29254E; // 0x20
	::AB642D1382756991* ED86FBC5C5B2F222; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1A311F7DE3DEBDE__CTOR_OFFSET))(this);
	}
};
