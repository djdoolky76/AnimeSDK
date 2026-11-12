#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDBCOLDGIKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE61D0)

inline static constexpr unsigned int MDBCOLDGIKO_TypeDefinitionIndex = 43340;

	class MDBCOLDGIKO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBCOLDGIKO_CTOR_OFFSET))(this);
		}

	};
