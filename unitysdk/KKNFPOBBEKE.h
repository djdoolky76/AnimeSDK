#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKNFPOBBEKE_DBOBDPMCMAC_OFFSET UNITYSDK_OFFSET(0xB4CF6B0)

inline static constexpr unsigned int KKNFPOBBEKE_TypeDefinitionIndex = 74812;

	class KKNFPOBBEKE : public ::System::Object
	{
	public:
		// static const ::System::Object IAMMLALJPIE; // 0x0
		// static const ::System::Object GJDPCBOIJCC; // 0x0
		static ::System::UInt32 DBOBDPMCMAC()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + KKNFPOBBEKE_DBOBDPMCMAC_OFFSET))();
		}

	};
