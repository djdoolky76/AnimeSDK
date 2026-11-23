#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/EF2A706049267B60.h"

namespace System { class String; }

#define AAA3DDBED40234E6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AAA3DDBED40234E6_TypeDefinitionIndex = 9804;

class AAA3DDBED40234E6 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::EF2A706049267B60 E9C199F701A67F38; // 0x38
	::System::Byte _padding0[0x4];
	::System::String* A5648D1BF6D3C10A; // 0x40
	::System::Single BD5C1F3DDACAB70F; // 0x48
	::System::Boolean B4BAE8B9B456F4A1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAA3DDBED40234E6__CTOR_OFFSET))(this);
	}
};
