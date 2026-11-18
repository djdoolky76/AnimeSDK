#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLNNAIFJKIE;
class LLNNAIFJKIE_JPGNGJCDCAM;

#define LLNNAIFJKIE_IGOKJCPAHGI_INHEFFONHPL_OFFSET UNITYSDK_OFFSET(0x158F4F40)
#define LLNNAIFJKIE_IGOKJCPAHGI_NDJJGOGLCLP_OFFSET UNITYSDK_OFFSET(0x158F4F80)
#define LLNNAIFJKIE_IGOKJCPAHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x158F4F30)

inline static constexpr unsigned int LLNNAIFJKIE_IGOKJCPAHGI_TypeDefinitionIndex = 62062;

class LLNNAIFJKIE_IGOKJCPAHGI : public ::System::Object
{
public:
	::LLNNAIFJKIE_JPGNGJCDCAM* EABCDAPLCCM; // 0x10
	::LLNNAIFJKIE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_IGOKJCPAHGI__CTOR_OFFSET))(this);
	}

	::System::Void INHEFFONHPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_IGOKJCPAHGI_INHEFFONHPL_OFFSET))(this);
	}

	::System::Void NDJJGOGLCLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLNNAIFJKIE_IGOKJCPAHGI_NDJJGOGLCLP_OFFSET))(this);
	}
};
