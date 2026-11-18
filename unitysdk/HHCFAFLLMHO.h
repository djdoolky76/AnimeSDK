#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNFHDGBCCKB;

#define HHCFAFLLMHO_KIOILJFAFML_OFFSET UNITYSDK_OFFSET(0x1FA08B40)
#define HHCFAFLLMHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA08B30)

inline static constexpr unsigned int HHCFAFLLMHO_TypeDefinitionIndex = 95396;

class HHCFAFLLMHO : public ::System::Object
{
public:
	::HNFHDGBCCKB* DFMIBBFLPPA; // 0x10
	::System::UInt64 CFFNKJFMIOI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFAFLLMHO__CTOR_OFFSET))(this);
	}

	::System::Boolean KIOILJFAFML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFAFLLMHO_KIOILJFAFML_OFFSET))(this);
	}
};
