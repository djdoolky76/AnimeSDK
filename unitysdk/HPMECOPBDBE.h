#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIACBNKCCJ;
class IPNMGDFPLGL;

#define HPMECOPBDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF7820)

	class HPMECOPBDBE : public ::System::Object
	{
	public:
		::BJIACBNKCCJ* NDJINIMPHFH; // 0x10
		::IPNMGDFPLGL* LDJIMLODGLG; // 0x18
		::System::Single BJOCBPFKJDP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMECOPBDBE_CTOR_OFFSET))(this);
		}

	};
