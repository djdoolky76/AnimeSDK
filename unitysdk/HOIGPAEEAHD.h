#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOIGPAEEAHD_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAC6B0)

inline static constexpr unsigned int HOIGPAEEAHD_TypeDefinitionIndex = 56310;

	class HOIGPAEEAHD : public ::System::Object
	{
	public:
		::System::UInt32 FIJLEDEKBJP; // 0x10
		::System::UInt32 MBCACNKDMFG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIGPAEEAHD_CTOR_OFFSET))(this);
		}

	};
