#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KKNFPOBBEKE_CODIPLCLPGN_OFFSET UNITYSDK_OFFSET(0x1735C7D0)
#define KKNFPOBBEKE_DBOBDPMCMAC_OFFSET UNITYSDK_OFFSET(0x1735C790)

inline static constexpr unsigned int KKNFPOBBEKE_TypeDefinitionIndex = 76982;

	class KKNFPOBBEKE : public ::System::Object
	{
	public:
		// static const ::System::Object IAMMLALJPIE; // 0x0
		// static const ::System::Object GJDPCBOIJCC; // 0x0
		static ::System::UInt32 DBOBDPMCMAC()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + KKNFPOBBEKE_DBOBDPMCMAC_OFFSET))();
		}

		static ::System::UInt32 CODIPLCLPGN()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + KKNFPOBBEKE_CODIPLCLPGN_OFFSET))();
		}

	};
