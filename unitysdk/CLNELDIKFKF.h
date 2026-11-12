#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLNELDIKFKF_MCEBLOPBMON_OFFSET UNITYSDK_OFFSET(0xE35AB60)
#define CLNELDIKFKF_OGNPCDBAEJP_OFFSET UNITYSDK_OFFSET(0xE35AA80)
#define CLNELDIKFKF_PFGBMCPMDCP_OFFSET UNITYSDK_OFFSET(0xE35AC70)

inline static constexpr unsigned int CLNELDIKFKF_TypeDefinitionIndex = 63802;

	class CLNELDIKFKF : public ::System::Object
	{
	public:
		static ::System::UInt32 OGNPCDBAEJP()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLNELDIKFKF_OGNPCDBAEJP_OFFSET))();
		}

		static ::System::UInt32 MCEBLOPBMON()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLNELDIKFKF_MCEBLOPBMON_OFFSET))();
		}

		static ::System::Int32 PFGBMCPMDCP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLNELDIKFKF_PFGBMCPMDCP_OFFSET))();
		}

	};
