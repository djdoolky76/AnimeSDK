#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBNONKAIAMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC8FA610)

inline static constexpr unsigned int PBNONKAIAMK_TypeDefinitionIndex = 57523;

	class PBNONKAIAMK : public ::System::Object
	{
	public:
		::System::UInt32 KKCKMCDGCGK; // 0x10
		::System::UInt32 MBCACNKDMFG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNONKAIAMK_CTOR_OFFSET))(this);
		}

	};
