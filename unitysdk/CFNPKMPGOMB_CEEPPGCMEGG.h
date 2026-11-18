#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_CEEPPGCMEGG_IIABCFPKBBM_OFFSET UNITYSDK_OFFSET(0x14F25E00)
#define CFNPKMPGOMB_CEEPPGCMEGG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F23E40)

inline static constexpr unsigned int CFNPKMPGOMB_CEEPPGCMEGG_TypeDefinitionIndex = 44979;

class CFNPKMPGOMB_CEEPPGCMEGG : public ::System::Object
{
public:
	::System::Action* NGFDBMGHFCJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_CEEPPGCMEGG__CTOR_OFFSET))(this);
	}

	::System::Void IIABCFPKBBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_CEEPPGCMEGG_IIABCFPKBBM_OFFSET))(this);
	}
};
