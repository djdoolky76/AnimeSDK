#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKCLEAHHCOI_CTOR_OFFSET UNITYSDK_OFFSET(0xC103BB0)

inline static constexpr unsigned int BKCLEAHHCOI_TypeDefinitionIndex = 59082;

	class BKCLEAHHCOI : public ::System::Object
	{
	public:
		::System::Boolean JJJLGKIBFGC; // 0x10
		::System::Boolean DMINGNMNONO; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCLEAHHCOI_CTOR_OFFSET))(this);
		}

	};
