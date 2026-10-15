#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIODADALNHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC056E0)

	class NIODADALNHA : public ::System::Object
	{
	public:
		::System::UInt32 KKCKMCDGCGK; // 0x10
		::System::UInt32 MBCACNKDMFG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIODADALNHA_CTOR_OFFSET))(this);
		}

	};
