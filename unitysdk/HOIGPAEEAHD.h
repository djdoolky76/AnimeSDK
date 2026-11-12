#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOIGPAEEAHD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D5BEF0)

inline static constexpr unsigned int HOIGPAEEAHD_TypeDefinitionIndex = 57524;

	class HOIGPAEEAHD : public ::System::Object
	{
	public:
		::System::UInt32 MBCACNKDMFG; // 0x10
		::System::UInt32 FIJLEDEKBJP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOIGPAEEAHD_CTOR_OFFSET))(this);
		}

	};
