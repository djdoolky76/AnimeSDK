#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFLDDDIPN;

#define CCGFLDDDIPN_CTOR_OFFSET UNITYSDK_OFFSET(0x18FFA2B0)
#define CCGFLDDDIPN_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x18FFA240)

inline static constexpr unsigned int CCGFLDDDIPN_TypeDefinitionIndex = 57521;

	class CCGFLDDDIPN : public ::System::Object
	{
	public:
		::System::UInt32 EFJAHDEMACL; // 0x10
		::System::UInt32 KKCKMCDGCGK; // 0x14
		::System::UInt32 MBCACNKDMFG; // 0x18
		::System::Boolean NKNCBCEHKCP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGFLDDDIPN_CTOR_OFFSET))(this);
		}

		::CCGFLDDDIPN* NBHCPBBGAKA()
		{
			return ((::CCGFLDDDIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGFLDDDIPN_NBHCPBBGAKA_OFFSET))(this);
		}

	};
