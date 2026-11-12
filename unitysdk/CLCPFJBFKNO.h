#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLCPFJBFKNO_BKMJNAMOECD_OFFSET UNITYSDK_OFFSET(0xF72D0)
#define CLCPFJBFKNO_FNCCDDCKNHM_OFFSET UNITYSDK_OFFSET(0xF7390)
#define CLCPFJBFKNO_HOKENEHPKKJ_OFFSET UNITYSDK_OFFSET(0xF7280)

inline static constexpr unsigned int CLCPFJBFKNO_TypeDefinitionIndex = 70594;

	struct alignas(4) CLCPFJBFKNO
	{
		::System::UInt32 ELGMGKGMCCM; // 0x10
		::UnityEngine::Vector3 LHGEJANGPIO; // 0x14
		::System::Single AIDNPNEBLII; // 0x20
		::System::Single NDNHLCBHDDE; // 0x24
		::System::Single AEEHLGBJKHB; // 0x28
		::System::Single CAAHDKNBLON; // 0x2C
		::System::Single LOMCMMEKNHD; // 0x30
		::System::Single HOKENEHPKKJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCPFJBFKNO_HOKENEHPKKJ_OFFSET))(this);
		}

		::System::Single BKMJNAMOECD(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLCPFJBFKNO_BKMJNAMOECD_OFFSET))(this, a1);
		}

		::System::Single FNCCDDCKNHM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCPFJBFKNO_FNCCDDCKNHM_OFFSET))(this);
		}

	};
