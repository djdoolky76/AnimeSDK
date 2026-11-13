#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JJCPEDEHLON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE184D0)

inline static constexpr unsigned int JJCPEDEHLON_TypeDefinitionIndex = 43932;

	class JJCPEDEHLON : public ::System::Object
	{
	public:
		::System::Single FGHNGICIFII; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCPEDEHLON_CTOR_OFFSET))(this);
		}

	};
