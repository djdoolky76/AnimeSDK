#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDBCOLDGIKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F68A0)

inline static constexpr unsigned int MDBCOLDGIKO_TypeDefinitionIndex = 42365;

	class MDBCOLDGIKO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBCOLDGIKO_CTOR_OFFSET))(this);
		}

	};
