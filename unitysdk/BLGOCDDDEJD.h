#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLGOCDDDEJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC3FF960)

inline static constexpr unsigned int BLGOCDDDEJD_TypeDefinitionIndex = 54141;

	class BLGOCDDDEJD : public ::System::Object
	{
	public:
		::System::Boolean ADJOCGJOHHB; // 0x10
		::System::Boolean EAEOKODMBHD; // 0x11
		::System::Boolean FIFMMCANPIO; // 0x12
		::System::Boolean IBAMGDKKJFI; // 0x13
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLGOCDDDEJD_CTOR_OFFSET))(this);
		}

	};
