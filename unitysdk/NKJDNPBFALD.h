#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NKJDNPBFALD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96DBB0)

inline static constexpr unsigned int NKJDNPBFALD_TypeDefinitionIndex = 42183;

	class NKJDNPBFALD : public ::System::Object
	{
	public:
		::System::UInt32 OOPKIKDJLOK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJDNPBFALD_CTOR_OFFSET))(this);
		}

	};
