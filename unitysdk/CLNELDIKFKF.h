#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLNELDIKFKF_MCEBLOPBMON_OFFSET UNITYSDK_OFFSET(0xDA1BB70)
#define CLNELDIKFKF_OGNPCDBAEJP_OFFSET UNITYSDK_OFFSET(0xDA1BA90)
#define CLNELDIKFKF_PFGBMCPMDCP_OFFSET UNITYSDK_OFFSET(0xDA1BC80)

inline static constexpr unsigned int CLNELDIKFKF_TypeDefinitionIndex = 62389;

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
