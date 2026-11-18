#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FHJDJLLPFEA;

#define OCIAMHMOLOF__CTOR_OFFSET UNITYSDK_OFFSET(0xE143870)

inline static constexpr unsigned int OCIAMHMOLOF_TypeDefinitionIndex = 80274;

class OCIAMHMOLOF : public ::System::Object
{
public:
	::FHJDJLLPFEA* CLNBAMIFJLI; // 0x10
	::System::Boolean NAIOJJBNFEH; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 ABHBKFJKINO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIAMHMOLOF__CTOR_OFFSET))(this);
	}
};
