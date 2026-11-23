#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BE61E17EAE3C9475_AEC82C946963EA47.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BE61E17EAE3C9475_EB8F3F6162992C23__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE61E17EAE3C9475_EB8F3F6162992C23_TypeDefinitionIndex = 2690;

class BE61E17EAE3C9475_EB8F3F6162992C23 : public ::System::Object
{
public:
	::BE61E17EAE3C9475_AEC82C946963EA47 AC12922B081B5508; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* AF2DC8E07EFA86BD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE61E17EAE3C9475_EB8F3F6162992C23__CTOR_OFFSET))(this);
	}
};
