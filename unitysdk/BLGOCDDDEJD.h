#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLGOCDDDEJD_CTOR_OFFSET UNITYSDK_OFFSET(0x18B48B60)

inline static constexpr unsigned int BLGOCDDDEJD_TypeDefinitionIndex = 54141;

	class BLGOCDDDEJD : public ::System::Object
	{
	public:
		::System::Boolean IBAMGDKKJFI; // 0x10
		::System::Boolean FIFMMCANPIO; // 0x11
		::System::Boolean ADJOCGJOHHB; // 0x12
		::System::Boolean EAEOKODMBHD; // 0x13
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGOCDDDEJD_CTOR_OFFSET))(this);
		}

	};
