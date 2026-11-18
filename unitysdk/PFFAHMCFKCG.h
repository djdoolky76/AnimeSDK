#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PFFAHMCFKCG_HLHPCPLGFJP_OFFSET UNITYSDK_OFFSET(0x1F7A7D20)
#define PFFAHMCFKCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A7D10)

inline static constexpr unsigned int PFFAHMCFKCG_TypeDefinitionIndex = 29130;

class PFFAHMCFKCG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFAHMCFKCG__CTOR_OFFSET))(this);
	}

	static ::System::Void HLHPCPLGFJP(::System::Boolean OCKGCBHGGDP, ::System::String* BHDNBGLCNOM, ::System::Object* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PFFAHMCFKCG_HLHPCPLGFJP_OFFSET))(OCKGCBHGGDP, BHDNBGLCNOM, AAOCANGHBDG);
	}
};
