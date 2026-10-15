#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFLDDDIPN;

#define CCGFLDDDIPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC737CB0)
#define CCGFLDDDIPN_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xC737C40)

inline static constexpr unsigned int CCGFLDDDIPN_TypeDefinitionIndex = 56307;

	class CCGFLDDDIPN : public ::System::Object
	{
	public:
		::System::Boolean NKNCBCEHKCP; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 EFJAHDEMACL; // 0x14
		::System::UInt32 MBCACNKDMFG; // 0x18
		::System::UInt32 KKCKMCDGCGK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGFLDDDIPN_CTOR_OFFSET))(this);
		}

		::CCGFLDDDIPN* NBHCPBBGAKA()
		{
			return ((::CCGFLDDDIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGFLDDDIPN_NBHCPBBGAKA_OFFSET))(this);
		}

	};
