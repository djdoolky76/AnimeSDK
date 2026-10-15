#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICBHGLKDANP.h"
#include "unitysdk/System/Object.h"

#define BJFPHNECJII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BB030)

inline static constexpr unsigned int BJFPHNECJII_TypeDefinitionIndex = 42268;

	class BJFPHNECJII : public ::System::Object
	{
	public:
		::ICBHGLKDANP IHPOJNBBDPB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFPHNECJII_CTOR_OFFSET))(this);
		}

	};
