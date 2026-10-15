#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BILMKGHAIOC.h"
#include "unitysdk/System/Object.h"

#define BEJNCHOBACA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A700)

inline static constexpr unsigned int BEJNCHOBACA_TypeDefinitionIndex = 42776;

	class BEJNCHOBACA : public ::System::Object
	{
	public:
		::BILMKGHAIOC OGKKJKFNCFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNCHOBACA_CTOR_OFFSET))(this);
		}

	};
