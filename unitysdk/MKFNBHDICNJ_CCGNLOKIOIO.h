#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;

#define MKFNBHDICNJ_CCGNLOKIOIO_LPJLFIBMBCM_OFFSET UNITYSDK_OFFSET(0x1216CF70)
#define MKFNBHDICNJ_CCGNLOKIOIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1216CF60)

inline static constexpr unsigned int MKFNBHDICNJ_CCGNLOKIOIO_TypeDefinitionIndex = 61393;

class MKFNBHDICNJ_CCGNLOKIOIO : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Boolean DBBIDCBDBDB; // 0x18
	::System::Byte _padding0[0x3];
	::System::UInt32 ACHBBPJIBIE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CCGNLOKIOIO__CTOR_OFFSET))(this);
	}

	::System::Void LPJLFIBMBCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_CCGNLOKIOIO_LPJLFIBMBCM_OFFSET))(this);
	}
};
