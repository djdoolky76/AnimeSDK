#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define HOANKCNAFNE_GKFIJMJBEFL_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x15B6F680)
#define HOANKCNAFNE_GKFIJMJBEFL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15B6F5E0)
#define HOANKCNAFNE_GKFIJMJBEFL__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F5D0)

inline static constexpr unsigned int HOANKCNAFNE_GKFIJMJBEFL_TypeDefinitionIndex = 47445;

class HOANKCNAFNE_GKFIJMJBEFL : public ::System::Object
{
public:
	::HOCDHMEPPEG MKGINGALGCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANKCNAFNE_GKFIJMJBEFL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANKCNAFNE_GKFIJMJBEFL_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOANKCNAFNE_GKFIJMJBEFL_AAHMACBDCPN_OFFSET))(this);
	}
};
