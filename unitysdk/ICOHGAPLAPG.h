#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define ICOHGAPLAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB6000)

inline static constexpr unsigned int ICOHGAPLAPG_TypeDefinitionIndex = 10812;

	class ICOHGAPLAPG : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOHGAPLAPG_CTOR_OFFSET))(this);
		}

	};
