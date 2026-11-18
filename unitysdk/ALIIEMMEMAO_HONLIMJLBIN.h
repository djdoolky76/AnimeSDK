#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOPJHCMEHOK.h"
#include "unitysdk/System/EventArgs.h"

#define ALIIEMMEMAO_HONLIMJLBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC16C0)

inline static constexpr unsigned int ALIIEMMEMAO_HONLIMJLBIN_TypeDefinitionIndex = 93263;

class ALIIEMMEMAO_HONLIMJLBIN : public ::System::EventArgs
{
public:
	::DOPJHCMEHOK AFFMACLGCDP; // 0x10
	::System::Boolean JNBGBKMJGAG; // 0x14
	::System::Byte _padding0[0x3];
	::System::UInt64 MDDGIMHIOAE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_HONLIMJLBIN__CTOR_OFFSET))(this);
	}
};
