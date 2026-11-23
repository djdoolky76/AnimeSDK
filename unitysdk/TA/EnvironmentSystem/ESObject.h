#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Type; }

#define TA_ENVIRONMENTSYSTEM_ESOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x28C6560)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESObject_TypeDefinitionIndex = 16315;

	class ESObject
	{
	public:
		::System::Type* ObjectType; // 0x28

		::System::Void _ctor(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESOBJECT__CTOR_OFFSET))(this, A288CB28FC2A6DA3);
		}
	};
}
