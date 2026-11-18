#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KPPMLDFMCID_ELJNIAFBFAE_OFFSET UNITYSDK_OFFSET(0x1864FA00)
#define KPPMLDFMCID_FPFPAKBADEI_OFFSET UNITYSDK_OFFSET(0x1864FA80)
#define KPPMLDFMCID_KHFMOEHIMHD_OFFSET UNITYSDK_OFFSET(0x1864F9C0)
#define KPPMLDFMCID_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1864FAC0)
#define KPPMLDFMCID__CTOR_OFFSET UNITYSDK_OFFSET(0x1864F9B0)

inline static constexpr unsigned int KPPMLDFMCID_TypeDefinitionIndex = 47736;

class KPPMLDFMCID : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPMLDFMCID__CTOR_OFFSET))(this);
	}

	::System::Void KHFMOEHIMHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPMLDFMCID_KHFMOEHIMHD_OFFSET))(this);
	}

	::System::Void ELJNIAFBFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPMLDFMCID_ELJNIAFBFAE_OFFSET))(this);
	}

	::System::Void FPFPAKBADEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPMLDFMCID_FPFPAKBADEI_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPMLDFMCID_KKFNPONHGEM_OFFSET))(this);
	}
};
