#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EC2573D47DD5E811__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EC2573D47DD5E811_TypeDefinitionIndex = 1274;

class EC2573D47DD5E811 : public ::E379DE61A548837D
{
public:
	::System::UInt32 AA4D3B971EDA0C36; // 0x38
	::System::UInt32 B6973DE2071A587C; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC2573D47DD5E811__CTOR_OFFSET))(this);
	}
};
