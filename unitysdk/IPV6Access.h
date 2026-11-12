#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPV6ACCESS_CTOR_OFFSET UNITYSDK_OFFSET(0xB5B0170)

inline static constexpr unsigned int IPV6Access_TypeDefinitionIndex = 46957;

	class IPV6Access : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPV6ACCESS_CTOR_OFFSET))(this);
		}

	};
