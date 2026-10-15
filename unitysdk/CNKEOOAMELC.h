#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CNKEOOAMELC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4DE0)

inline static constexpr unsigned int CNKEOOAMELC_TypeDefinitionIndex = 42190;

	class CNKEOOAMELC : public ::System::Object
	{
	public:
		::System::UInt32 EABAEHIBIJC; // 0x10
		::System::Single ILPNALCNHFO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKEOOAMELC_CTOR_OFFSET))(this);
		}

	};
