#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALIIEMMEMAO;

#define ALIIEMMEMAO_NHAPJMBLNPB_IEKKIHFLNKH_OFFSET UNITYSDK_OFFSET(0x14374C60)
#define ALIIEMMEMAO_NHAPJMBLNPB__CTOR_OFFSET UNITYSDK_OFFSET(0x14374C50)

inline static constexpr unsigned int ALIIEMMEMAO_NHAPJMBLNPB_TypeDefinitionIndex = 93266;

class ALIIEMMEMAO_NHAPJMBLNPB : public ::System::Object
{
public:
	::ALIIEMMEMAO* KLHPEBKNIFB; // 0x10
	::System::Int32 NACGJJKHEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_NHAPJMBLNPB__CTOR_OFFSET))(this);
	}

	::System::Void IEKKIHFLNKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIIEMMEMAO_NHAPJMBLNPB_IEKKIHFLNKH_OFFSET))(this);
	}
};
