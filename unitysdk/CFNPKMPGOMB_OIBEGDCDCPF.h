#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_OIBEGDCDCPF_MNGAKFBIBOG_OFFSET UNITYSDK_OFFSET(0x128ED4C0)
#define CFNPKMPGOMB_OIBEGDCDCPF__CTOR_OFFSET UNITYSDK_OFFSET(0x128ED4B0)

inline static constexpr unsigned int CFNPKMPGOMB_OIBEGDCDCPF_TypeDefinitionIndex = 44977;

class CFNPKMPGOMB_OIBEGDCDCPF : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_OIBEGDCDCPF__CTOR_OFFSET))(this);
	}

	::System::Void MNGAKFBIBOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_OIBEGDCDCPF_MNGAKFBIBOG_OFFSET))(this);
	}
};
