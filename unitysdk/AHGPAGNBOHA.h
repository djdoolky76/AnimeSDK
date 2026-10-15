#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHGPAGNBOHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88D8C0)

	class AHGPAGNBOHA : public ::System::Object
	{
	public:
		::System::Int32 NMOKIHDMMNG; // 0x10
		::System::UInt32 NBFOFKGNNIO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGPAGNBOHA_CTOR_OFFSET))(this);
		}

	};
