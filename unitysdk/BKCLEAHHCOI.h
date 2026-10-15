#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKCLEAHHCOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ADAC0)

inline static constexpr unsigned int BKCLEAHHCOI_TypeDefinitionIndex = 57845;

	class BKCLEAHHCOI : public ::System::Object
	{
	public:
		::System::Boolean DMINGNMNONO; // 0x10
		::System::Boolean JJJLGKIBFGC; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCLEAHHCOI_CTOR_OFFSET))(this);
		}

	};
