#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIACBNKCCJ;
class IPNMGDFPLGL;

#define HPMECOPBDBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBDA30)

inline static constexpr unsigned int HPMECOPBDBE_TypeDefinitionIndex = 43906;

	class HPMECOPBDBE : public ::System::Object
	{
	public:
		::IPNMGDFPLGL* LDJIMLODGLG; // 0x10
		::BJIACBNKCCJ* NDJINIMPHFH; // 0x18
		::System::Single BJOCBPFKJDP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMECOPBDBE_CTOR_OFFSET))(this);
		}

	};
