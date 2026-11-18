#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODCNDCIDKF;

#define AODCNDCIDKF_DKJLLNNIBDC_ELHMHNBHIOD_OFFSET UNITYSDK_OFFSET(0x17DE3F20)
#define AODCNDCIDKF_DKJLLNNIBDC_GNFOOIMBKGK_OFFSET UNITYSDK_OFFSET(0x17DE3EB0)
#define AODCNDCIDKF_DKJLLNNIBDC_IMOAEOOMPLP_OFFSET UNITYSDK_OFFSET(0x17DE3E00)
#define AODCNDCIDKF_DKJLLNNIBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE3DF0)

inline static constexpr unsigned int AODCNDCIDKF_DKJLLNNIBDC_TypeDefinitionIndex = 79610;

class AODCNDCIDKF_DKJLLNNIBDC : public ::System::Object
{
public:
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x10
	::System::Int32 JINNGALFJEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_DKJLLNNIBDC__CTOR_OFFSET))(this);
	}

	::System::Void IMOAEOOMPLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_DKJLLNNIBDC_IMOAEOOMPLP_OFFSET))(this);
	}

	::System::Void GNFOOIMBKGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_DKJLLNNIBDC_GNFOOIMBKGK_OFFSET))(this);
	}

	::System::Void ELHMHNBHIOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_DKJLLNNIBDC_ELHMHNBHIOD_OFFSET))(this);
	}
};
