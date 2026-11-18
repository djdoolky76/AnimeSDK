#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGHDIOCBPHD;

#define ECDLPHIKHCA_LJBPAGFHGEK_CFNFJCMCBKF_OFFSET UNITYSDK_OFFSET(0x1F44ED90)
#define ECDLPHIKHCA_LJBPAGFHGEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F44ED80)

inline static constexpr unsigned int ECDLPHIKHCA_LJBPAGFHGEK_TypeDefinitionIndex = 96550;

class ECDLPHIKHCA_LJBPAGFHGEK : public ::System::Object
{
public:
	::EGHDIOCBPHD* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLPHIKHCA_LJBPAGFHGEK__CTOR_OFFSET))(this);
	}

	::System::Void CFNFJCMCBKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLPHIKHCA_LJBPAGFHGEK_CFNFJCMCBKF_OFFSET))(this);
	}
};
