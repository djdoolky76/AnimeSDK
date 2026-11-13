#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JACEAICCKLP_CGEDFPNOPEH_CTOR_OFFSET UNITYSDK_OFFSET(0x19321370)
#define JACEAICCKLP_CGEDFPNOPEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19321380)

inline static constexpr unsigned int JACEAICCKLP_CGEDFPNOPEH_TypeDefinitionIndex = 51012;

	class JACEAICCKLP_CGEDFPNOPEH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACEAICCKLP_CGEDFPNOPEH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JACEAICCKLP_CGEDFPNOPEH_DISPOSE_OFFSET))(this);
		}

	};
