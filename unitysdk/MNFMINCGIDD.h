#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNFMINCGIDD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C4A50)
#define MNFMINCGIDD_HEKJFMHHCNB_OFFSET UNITYSDK_OFFSET(0xC2C48D0)
#define MNFMINCGIDD_JBCDLJCMFGC_OFFSET UNITYSDK_OFFSET(0xC2C48F0)
#define MNFMINCGIDD_OCIAADMCPNJ_OFFSET UNITYSDK_OFFSET(0xC2C48E0)
#define MNFMINCGIDD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC2C4900)

inline static constexpr unsigned int MNFMINCGIDD_TypeDefinitionIndex = 78236;

	class MNFMINCGIDD : public ::System::Object
	{
	public:
		::System::Boolean HGLFLENHMBB; // 0x10
		::System::Boolean NLJKLODIOJF; // 0x11
		::System::Boolean IDAEFCMDGBN; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFMINCGIDD_CTOR_OFFSET))(this);
		}

		::System::Boolean HEKJFMHHCNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFMINCGIDD_HEKJFMHHCNB_OFFSET))(this);
		}

		::System::Boolean OCIAADMCPNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFMINCGIDD_OCIAADMCPNJ_OFFSET))(this);
		}

		::System::Boolean JBCDLJCMFGC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFMINCGIDD_JBCDLJCMFGC_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFMINCGIDD_PAGKOAEOLKA_OFFSET))(this);
		}

	};
