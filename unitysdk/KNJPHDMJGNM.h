#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFGFKCCLKIG.h"
#include "unitysdk/System/Object.h"

#define KNJPHDMJGNM__CTOR_OFFSET UNITYSDK_OFFSET(0x1634CD70)

inline static constexpr unsigned int KNJPHDMJGNM_TypeDefinitionIndex = 42028;

class KNJPHDMJGNM : public ::System::Object
{
public:
	::PFGFKCCLKIG OIKFFMHNCHB; // 0x10
	::System::Boolean DIOOCBHOEAE; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single OOAJBKAKHEA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNJPHDMJGNM__CTOR_OFFSET))(this);
	}
};
