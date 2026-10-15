#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OMFMODHAOCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D8A90)

inline static constexpr unsigned int OMFMODHAOCM_TypeDefinitionIndex = 36435;

	class OMFMODHAOCM : public ::System::Object
	{
	public:
		::System::UInt32 HBBDCPNALCC; // 0x10
		::System::UInt32 NKGDAAOPLJK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFMODHAOCM_CTOR_OFFSET))(this);
		}

	};
