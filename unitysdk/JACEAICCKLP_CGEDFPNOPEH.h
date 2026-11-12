#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JACEAICCKLP_CGEDFPNOPEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB876A00)
#define JACEAICCKLP_CGEDFPNOPEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB876A10)

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
