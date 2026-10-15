#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AAMGDIOHCFG_BBNAGMAIENE_OFFSET UNITYSDK_OFFSET(0xB0CFD10)
#define AAMGDIOHCFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB0CFE60)
#define AAMGDIOHCFG_GAOEIFJANNL_OFFSET UNITYSDK_OFFSET(0xB0CFE10)
#define AAMGDIOHCFG_GDKCEGIAOKA_OFFSET UNITYSDK_OFFSET(0xB0CFD70)
#define AAMGDIOHCFG_IDCGICECPHO_OFFSET UNITYSDK_OFFSET(0xB0CFDC0)

	class AAMGDIOHCFG : public ::System::Object
	{
	public:
		::System::Int32 MOEIHEFEPOF; // 0x10
		::System::Int32 CMNNGJKFIOM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGDIOHCFG_CTOR_OFFSET))(this);
		}

		::System::Boolean BBNAGMAIENE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGDIOHCFG_BBNAGMAIENE_OFFSET))(this);
		}

		::System::Boolean GDKCEGIAOKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGDIOHCFG_GDKCEGIAOKA_OFFSET))(this);
		}

		::System::Void IDCGICECPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGDIOHCFG_IDCGICECPHO_OFFSET))(this);
		}

		::System::Int32 GAOEIFJANNL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGDIOHCFG_GAOEIFJANNL_OFFSET))(this);
		}

	};
