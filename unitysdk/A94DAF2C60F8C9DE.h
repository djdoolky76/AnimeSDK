#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/FCFBD64C9BC04AB6.h"

#define A94DAF2C60F8C9DE__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A94DAF2C60F8C9DE_TypeDefinitionIndex = 9568;

class A94DAF2C60F8C9DE : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::FCFBD64C9BC04AB6 B853A31E2E8E4552; // 0x38
	::System::Byte _padding0[0x4];
	::E12F55A5FCCCF1EC A59EED9CD4A8593A; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A94DAF2C60F8C9DE__CTOR_OFFSET))(this);
	}
};
