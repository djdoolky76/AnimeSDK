#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFDHDMPMEGE.h"
#include "unitysdk/System/Object.h"

#define OKIPLLDOPCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDBB00)
#define OKIPLLDOPCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEDBB10)

inline static constexpr unsigned int OKIPLLDOPCA_TypeDefinitionIndex = 47692;

	class OKIPLLDOPCA : public ::System::Object
	{
	public:
		::PFDHDMPMEGE ICLIBPOMLHA; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0xC0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKIPLLDOPCA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKIPLLDOPCA_DISPOSE_OFFSET))(this);
		}

	};
