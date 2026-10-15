#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPNIFHKDJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FFFF0)

inline static constexpr unsigned int MPNIFHKDJHH_TypeDefinitionIndex = 42362;

	class MPNIFHKDJHH : public ::System::Object
	{
	public:
		::System::Int32 GMDBHJKEAEI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNIFHKDJHH_CTOR_OFFSET))(this);
		}

	};
